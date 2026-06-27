# KiCad Notes

## PCB Design Workflow

1. Create Project
2. Draw Schematic
3. Annotate Components
4. Assign Footprints
5. Update PCB from Schematic
6. Arrange Components
7. Route Tracks
8. Add Copper Fill Zones
9. Run Design Rule Check (DRC)
10. Generate Gerber Files

---

## Main KiCad Editors

### Schematic Editor

Used to create the circuit diagram.

### PCB Editor

Used to place components and route PCB tracks.

### Footprint Editor

Used to create or edit component footprints.

### Symbol Editor

Used to create custom schematic symbols.

---

## Important Concepts

### Symbols

Represent electronic components in the schematic.

### Footprints

Represent the physical size and pin arrangement of components on the PCB.

### Nets

Electrical connections between components.

### Tracks

Copper paths carrying electrical signals.

### Vias

Connect tracks between PCB layers.

---

## Fill Zones

Copper areas connected to a net (commonly GND).

Benefits

- Easier routing
- Better grounding
- Reduced electrical noise

---

## Silkscreen

Top and bottom printed layer containing

- Component labels
- Logos
- Board name
- Version information

---

## 3D Viewer

Used to preview the completed PCB before fabrication.

---

## Gerber Files

Standard manufacturing files sent to PCB fabrication companies.

Common files include

- Top Copper
- Bottom Copper
- Silkscreen
- Solder Mask
- Drill File
- Board Outline

After generation, all files are compressed into a ZIP before uploading for manufacturing.

---

## Key Learnings

- Complete PCB design workflow
- Schematic creation
- Footprint assignment
- PCB routing
- Copper fill zones
- Silkscreen editing
- Gerber generation

## Key Takeaway

KiCad provides everything required to design professional PCBs, from circuit design to generating manufacturing-ready files.