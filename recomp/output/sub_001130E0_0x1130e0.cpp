#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001130E0
// Address: 0x1130e0 - 0x113290
void sub_001130E0_0x1130e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001130E0_0x1130e0");
#endif

    switch (ctx->pc) {
        case 0x11312cu: goto label_11312c;
        case 0x113158u: goto label_113158;
        case 0x113164u: goto label_113164;
        case 0x11319cu: goto label_11319c;
        case 0x1131c4u: goto label_1131c4;
        case 0x1131d0u: goto label_1131d0;
        case 0x1131fcu: goto label_1131fc;
        case 0x113208u: goto label_113208;
        case 0x113214u: goto label_113214;
        case 0x113220u: goto label_113220;
        case 0x113230u: goto label_113230;
        case 0x113238u: goto label_113238;
        case 0x113244u: goto label_113244;
        case 0x113274u: goto label_113274;
        default: break;
    }

    ctx->pc = 0x1130e0u;

    // 0x1130e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1130e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1130e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1130e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1130e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1130e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1130ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1130ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1130f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1130f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1130f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1130f8: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x1130f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x1130fc: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1130FCu;
    {
        const bool branch_taken_0x1130fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130FCu;
        // 0x113100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130fc) {
            ctx->pc = 0x113278u;
            goto label_113278;
        }
    }
    ctx->pc = 0x113104u;
    // 0x113104: 0x8e2201ec  lw          $v0, 0x1EC($s1)
    ctx->pc = 0x113104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x113108: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x113108u;
    {
        const bool branch_taken_0x113108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113108) {
            ctx->pc = 0x11310Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113108u;
            // 0x11310c: 0x8e2200d0  lw          $v0, 0xD0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113118u;
            goto label_113118;
        }
    }
    ctx->pc = 0x113110u;
    // 0x113110: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x113110u;
    {
        const bool branch_taken_0x113110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113110u;
        // 0x113114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113110) {
            ctx->pc = 0x113278u;
            goto label_113278;
        }
    }
    ctx->pc = 0x113118u;
label_113118:
    // 0x113118: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x113118u;
    {
        const bool branch_taken_0x113118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113118u;
        // 0x11311c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113118) {
            ctx->pc = 0x113278u;
            goto label_113278;
        }
    }
    ctx->pc = 0x113120u;
    // 0x113120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113124: 0xc0449d6  jal         func_112758
    ctx->pc = 0x113124u;
    SET_GPR_U32(ctx, 31, 0x11312Cu);
    ctx->pc = 0x113128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113124u;
    // 0x113128: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112758u, 0x113124u, 0x11312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11312Cu;
label_11312c:
    // 0x11312c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11312cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113130: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x113130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x113134: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x113134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x113138: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x113138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x11313c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11313cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113144: 0x8c500108  lw          $s0, 0x108($v0)
    ctx->pc = 0x113144u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x113148: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x113148u;
    {
        const bool branch_taken_0x113148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113148u;
        // 0x11314c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113148) {
            ctx->pc = 0x1131F4u;
            goto label_1131f4;
        }
    }
    ctx->pc = 0x113150u;
    // 0x113150: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x113150u;
    SET_GPR_U32(ctx, 31, 0x113158u);
    ctx->pc = 0x113154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113150u;
    // 0x113154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x113150u, 0x113158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113158u;
label_113158:
    // 0x113158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11315c: 0xc0944da  jal         func_251368
    ctx->pc = 0x11315Cu;
    SET_GPR_U32(ctx, 31, 0x113164u);
    ctx->pc = 0x113160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11315Cu;
    // 0x113160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x11315Cu, 0x113164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113164u;
label_113164:
    // 0x113164: 0x8e220244  lw          $v0, 0x244($s1)
    ctx->pc = 0x113164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x113168: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113168u;
    {
        const bool branch_taken_0x113168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113168u;
        // 0x11316c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113168) {
            ctx->pc = 0x113188u;
            goto label_113188;
        }
    }
    ctx->pc = 0x113170u;
    // 0x113170: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x113170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x113174: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x113174u;
    {
        const bool branch_taken_0x113174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113174) {
            ctx->pc = 0x113178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113174u;
            // 0x113178: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11318Cu;
            goto label_11318c;
        }
    }
    ctx->pc = 0x11317Cu;
    // 0x11317c: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x11317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x113180: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x113180u;
    {
        const bool branch_taken_0x113180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113180) {
            ctx->pc = 0x11318Cu;
            goto label_11318c;
        }
    }
    ctx->pc = 0x113188u;
label_113188:
    // 0x113188: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x113188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11318c:
    // 0x11318c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x11318Cu;
    {
        const bool branch_taken_0x11318c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11318Cu;
        // 0x113190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11318c) {
            ctx->pc = 0x1131F4u;
            goto label_1131f4;
        }
    }
    ctx->pc = 0x113194u;
    // 0x113194: 0xc044f48  jal         func_113D20
    ctx->pc = 0x113194u;
    SET_GPR_U32(ctx, 31, 0x11319Cu);
    ctx->pc = 0x113198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113194u;
    // 0x113198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D20u, 0x113194u, 0x11319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11319Cu;
label_11319c:
    // 0x11319c: 0x8e02041c  lw          $v0, 0x41C($s0)
    ctx->pc = 0x11319cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x1131a0: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x1131a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x1131a4: 0xae020420  sw          $v0, 0x420($s0)
    ctx->pc = 0x1131a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
    // 0x1131a8: 0x8e030ff8  lw          $v1, 0xFF8($s0)
    ctx->pc = 0x1131a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x1131ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1131acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1131b0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1131b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1131b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1131B4u;
    {
        const bool branch_taken_0x1131b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1131B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131B4u;
        // 0x1131b8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131b4) {
            ctx->pc = 0x1131C8u;
            goto label_1131c8;
        }
    }
    ctx->pc = 0x1131BCu;
    // 0x1131bc: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x1131BCu;
    SET_GPR_U32(ctx, 31, 0x1131C4u);
    ctx->pc = 0x1131C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131BCu;
    // 0x1131c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x1131BCu, 0x1131C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131C4u;
label_1131c4:
    // 0x1131c4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x1131c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_1131c8:
    // 0x1131c8: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x1131C8u;
    SET_GPR_U32(ctx, 31, 0x1131D0u);
    ctx->pc = 0x1131CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131C8u;
    // 0x1131cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x1131C8u, 0x1131D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131D0u;
label_1131d0:
    // 0x1131d0: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x1131d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x1131d4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1131d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1131d8: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1131d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1131dc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1131dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1131e0: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x1131e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x1131e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1131e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1131e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1131e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1131ec: 0xfe031020  sd          $v1, 0x1020($s0)
    ctx->pc = 0x1131ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 3));
    // 0x1131f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1131f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1131f4:
    // 0x1131f4: 0xc046138  jal         func_1184E0
    ctx->pc = 0x1131F4u;
    SET_GPR_U32(ctx, 31, 0x1131FCu);
    ctx->pc = 0x1131F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131F4u;
    // 0x1131f8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x1131F4u, 0x1131FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131FCu;
label_1131fc:
    // 0x1131fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1131fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113200: 0xc046154  jal         func_118550
    ctx->pc = 0x113200u;
    SET_GPR_U32(ctx, 31, 0x113208u);
    ctx->pc = 0x113204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113200u;
    // 0x113204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x113200u, 0x113208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113208u;
label_113208:
    // 0x113208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11320c: 0xc046256  jal         func_118958
    ctx->pc = 0x11320Cu;
    SET_GPR_U32(ctx, 31, 0x113214u);
    ctx->pc = 0x113210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11320Cu;
    // 0x113210: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x11320Cu, 0x113214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113214u;
label_113214:
    // 0x113214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113218: 0xc046164  jal         func_118590
    ctx->pc = 0x113218u;
    SET_GPR_U32(ctx, 31, 0x113220u);
    ctx->pc = 0x11321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113218u;
    // 0x11321c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x113218u, 0x113220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113220u;
label_113220:
    // 0x113220: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x113220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x113224: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x113224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113228: 0xc044e50  jal         func_113940
    ctx->pc = 0x113228u;
    SET_GPR_U32(ctx, 31, 0x113230u);
    ctx->pc = 0x11322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113228u;
    // 0x11322c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113940u, 0x113228u, 0x113230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113230u;
label_113230:
    // 0x113230: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x113230u;
    SET_GPR_U32(ctx, 31, 0x113238u);
    ctx->pc = 0x113234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113230u;
    // 0x113234: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x113230u, 0x113238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113238u;
label_113238:
    // 0x113238: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x113238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11323c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x11323Cu;
    SET_GPR_U32(ctx, 31, 0x113244u);
    ctx->pc = 0x113240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11323Cu;
    // 0x113240: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x11323Cu, 0x113244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113244u;
label_113244:
    // 0x113244: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x113244u;
    {
        const bool branch_taken_0x113244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x113248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113244u;
        // 0x113248: 0xae220118  sw          $v0, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113244) {
            ctx->pc = 0x113260u;
            goto label_113260;
        }
    }
    ctx->pc = 0x11324Cu;
    // 0x11324c: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x11324cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x113250: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x113250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x113254: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x113254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x113258: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11325c: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x11325cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
label_113260:
    // 0x113260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113264: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x113264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113268: 0xae220110  sw          $v0, 0x110($s1)
    ctx->pc = 0x113268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
    // 0x11326c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x11326Cu;
    SET_GPR_U32(ctx, 31, 0x113274u);
    ctx->pc = 0x113270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11326Cu;
    // 0x113270: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x11326Cu, 0x113274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113274u;
label_113274:
    // 0x113274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113278:
    // 0x113278: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x113278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11327c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11327cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113280: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x113280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113284: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x113284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x113288: 0x3e00008  jr          $ra
    ctx->pc = 0x113288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113288u;
        // 0x11328c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113290u;
}
