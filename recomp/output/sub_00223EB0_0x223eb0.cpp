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

// Function: sub_00223EB0
// Address: 0x223eb0 - 0x224630
void sub_00223EB0_0x223eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223EB0_0x223eb0");
#endif

    switch (ctx->pc) {
        case 0x223ee4u: goto label_223ee4;
        case 0x223ef8u: goto label_223ef8;
        case 0x223f04u: goto label_223f04;
        case 0x223f14u: goto label_223f14;
        case 0x223f34u: goto label_223f34;
        case 0x223f58u: goto label_223f58;
        case 0x223f7cu: goto label_223f7c;
        case 0x223fa0u: goto label_223fa0;
        case 0x223fc4u: goto label_223fc4;
        case 0x223fe8u: goto label_223fe8;
        case 0x22400cu: goto label_22400c;
        case 0x224030u: goto label_224030;
        case 0x224064u: goto label_224064;
        case 0x224078u: goto label_224078;
        case 0x224084u: goto label_224084;
        case 0x224094u: goto label_224094;
        case 0x2240b4u: goto label_2240b4;
        case 0x2240ecu: goto label_2240ec;
        case 0x224100u: goto label_224100;
        case 0x224118u: goto label_224118;
        case 0x22412cu: goto label_22412c;
        case 0x224144u: goto label_224144;
        case 0x224158u: goto label_224158;
        case 0x224170u: goto label_224170;
        case 0x224184u: goto label_224184;
        case 0x22419cu: goto label_22419c;
        case 0x2241b0u: goto label_2241b0;
        case 0x2241c8u: goto label_2241c8;
        case 0x2241dcu: goto label_2241dc;
        case 0x2241f4u: goto label_2241f4;
        case 0x224208u: goto label_224208;
        case 0x224220u: goto label_224220;
        case 0x224234u: goto label_224234;
        case 0x224240u: goto label_224240;
        case 0x224250u: goto label_224250;
        case 0x224270u: goto label_224270;
        case 0x224294u: goto label_224294;
        case 0x2242b8u: goto label_2242b8;
        case 0x2242dcu: goto label_2242dc;
        case 0x224318u: goto label_224318;
        case 0x224324u: goto label_224324;
        case 0x224338u: goto label_224338;
        case 0x22434cu: goto label_22434c;
        case 0x224364u: goto label_224364;
        case 0x224378u: goto label_224378;
        case 0x224390u: goto label_224390;
        case 0x2243a4u: goto label_2243a4;
        case 0x2243acu: goto label_2243ac;
        case 0x2243d0u: goto label_2243d0;
        case 0x2243e4u: goto label_2243e4;
        case 0x2243ecu: goto label_2243ec;
        case 0x224410u: goto label_224410;
        case 0x224424u: goto label_224424;
        case 0x224434u: goto label_224434;
        case 0x224458u: goto label_224458;
        case 0x22446cu: goto label_22446c;
        case 0x224474u: goto label_224474;
        case 0x224498u: goto label_224498;
        case 0x2244acu: goto label_2244ac;
        case 0x2244b4u: goto label_2244b4;
        case 0x2244d8u: goto label_2244d8;
        case 0x2244ecu: goto label_2244ec;
        case 0x2244fcu: goto label_2244fc;
        case 0x224518u: goto label_224518;
        case 0x224530u: goto label_224530;
        case 0x224544u: goto label_224544;
        case 0x22455cu: goto label_22455c;
        case 0x224578u: goto label_224578;
        case 0x224590u: goto label_224590;
        case 0x2245acu: goto label_2245ac;
        case 0x2245d8u: goto label_2245d8;
        case 0x2245fcu: goto label_2245fc;
        default: break;
    }

    ctx->pc = 0x223eb0u;

    // 0x223eb0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x223eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x223eb4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x223eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x223eb8: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x223eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x223ebc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x223ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ec0: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x223ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x223ec4: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x223ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x223ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ecc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223ed0: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x223ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x223ed4: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x223ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x223ed8: 0x24a51850  addiu       $a1, $a1, 0x1850
    ctx->pc = 0x223ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6224));
    // 0x223edc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223EDCu;
    SET_GPR_U32(ctx, 31, 0x223EE4u);
    ctx->pc = 0x223EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223EDCu;
    // 0x223ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223EDCu, 0x223EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223EE4u;
label_223ee4:
    // 0x223ee4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223ee8: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x223EE8u;
    {
        const bool branch_taken_0x223ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223ee8) {
            ctx->pc = 0x223EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223EE8u;
            // 0x223eec: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224058u;
            goto label_224058;
        }
    }
    ctx->pc = 0x223EF0u;
    // 0x223ef0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223EF0u;
    SET_GPR_U32(ctx, 31, 0x223EF8u);
    ctx->pc = 0x223EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223EF0u;
    // 0x223ef4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223EF0u, 0x223EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223EF8u;
label_223ef8:
    // 0x223ef8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x223ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223efc: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x223EFCu;
    SET_GPR_U32(ctx, 31, 0x223F04u);
    ctx->pc = 0x223F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223EFCu;
    // 0x223f00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x223EFCu, 0x223F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F04u;
label_223f04:
    // 0x223f04: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223f08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f0c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223F0Cu;
    SET_GPR_U32(ctx, 31, 0x223F14u);
    ctx->pc = 0x223F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F0Cu;
    // 0x223f10: 0x24a53978  addiu       $a1, $a1, 0x3978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223F0Cu, 0x223F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F14u;
label_223f14:
    // 0x223f14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223f18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223F18u;
    {
        const bool branch_taken_0x223f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F18u;
        // 0x223f1c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f18) {
            ctx->pc = 0x223F28u;
            goto label_223f28;
        }
    }
    ctx->pc = 0x223F20u;
    // 0x223f20: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x223F20u;
    {
        const bool branch_taken_0x223f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F20u;
        // 0x223f24: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f20) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x223F28u;
label_223f28:
    // 0x223f28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f2c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223F2Cu;
    SET_GPR_U32(ctx, 31, 0x223F34u);
    ctx->pc = 0x223F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F2Cu;
    // 0x223f30: 0x24a53988  addiu       $a1, $a1, 0x3988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223F2Cu, 0x223F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F34u;
label_223f34:
    // 0x223f34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223f38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223F38u;
    {
        const bool branch_taken_0x223f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F38u;
        // 0x223f3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f38) {
            ctx->pc = 0x223F48u;
            goto label_223f48;
        }
    }
    ctx->pc = 0x223F40u;
    // 0x223f40: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x223F40u;
    {
        const bool branch_taken_0x223f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F40u;
        // 0x223f44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f40) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x223F48u;
label_223f48:
    // 0x223f48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223f4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f50: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223F50u;
    SET_GPR_U32(ctx, 31, 0x223F58u);
    ctx->pc = 0x223F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F50u;
    // 0x223f54: 0x24a53998  addiu       $a1, $a1, 0x3998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223F50u, 0x223F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F58u;
label_223f58:
    // 0x223f58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223f5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223F5Cu;
    {
        const bool branch_taken_0x223f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F5Cu;
        // 0x223f60: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f5c) {
            ctx->pc = 0x223F6Cu;
            goto label_223f6c;
        }
    }
    ctx->pc = 0x223F64u;
    // 0x223f64: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x223F64u;
    {
        const bool branch_taken_0x223f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F64u;
        // 0x223f68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f64) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x223F6Cu;
label_223f6c:
    // 0x223f6c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223f70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f74: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223F74u;
    SET_GPR_U32(ctx, 31, 0x223F7Cu);
    ctx->pc = 0x223F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F74u;
    // 0x223f78: 0x24a539b0  addiu       $a1, $a1, 0x39B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223F74u, 0x223F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F7Cu;
label_223f7c:
    // 0x223f7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223f80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223F80u;
    {
        const bool branch_taken_0x223f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F80u;
        // 0x223f84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f80) {
            ctx->pc = 0x223F90u;
            goto label_223f90;
        }
    }
    ctx->pc = 0x223F88u;
    // 0x223f88: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x223F88u;
    {
        const bool branch_taken_0x223f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F88u;
        // 0x223f8c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f88) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x223F90u;
label_223f90:
    // 0x223f90: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223f94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f98: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223F98u;
    SET_GPR_U32(ctx, 31, 0x223FA0u);
    ctx->pc = 0x223F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F98u;
    // 0x223f9c: 0x24a539c0  addiu       $a1, $a1, 0x39C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223F98u, 0x223FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FA0u;
label_223fa0:
    // 0x223fa0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223fa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223FA4u;
    {
        const bool branch_taken_0x223fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FA4u;
        // 0x223fa8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fa4) {
            ctx->pc = 0x223FB4u;
            goto label_223fb4;
        }
    }
    ctx->pc = 0x223FACu;
    // 0x223fac: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x223FACu;
    {
        const bool branch_taken_0x223fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FACu;
        // 0x223fb0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fac) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x223FB4u;
label_223fb4:
    // 0x223fb4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223fb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fbc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223FBCu;
    SET_GPR_U32(ctx, 31, 0x223FC4u);
    ctx->pc = 0x223FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FBCu;
    // 0x223fc0: 0x24a539d0  addiu       $a1, $a1, 0x39D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223FBCu, 0x223FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FC4u;
label_223fc4:
    // 0x223fc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223fc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223FC8u;
    {
        const bool branch_taken_0x223fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FC8u;
        // 0x223fcc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fc8) {
            ctx->pc = 0x223FD8u;
            goto label_223fd8;
        }
    }
    ctx->pc = 0x223FD0u;
    // 0x223fd0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x223FD0u;
    {
        const bool branch_taken_0x223fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FD0u;
        // 0x223fd4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fd0) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x223FD8u;
label_223fd8:
    // 0x223fd8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223fdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fe0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223FE0u;
    SET_GPR_U32(ctx, 31, 0x223FE8u);
    ctx->pc = 0x223FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FE0u;
    // 0x223fe4: 0x24a539e8  addiu       $a1, $a1, 0x39E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223FE0u, 0x223FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FE8u;
label_223fe8:
    // 0x223fe8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223fec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223FECu;
    {
        const bool branch_taken_0x223fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FECu;
        // 0x223ff0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fec) {
            ctx->pc = 0x223FFCu;
            goto label_223ffc;
        }
    }
    ctx->pc = 0x223FF4u;
    // 0x223ff4: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x223FF4u;
    {
        const bool branch_taken_0x223ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FF4u;
        // 0x223ff8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ff4) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x223FFCu;
label_223ffc:
    // 0x223ffc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224000: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224004: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224004u;
    SET_GPR_U32(ctx, 31, 0x22400Cu);
    ctx->pc = 0x224008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224004u;
    // 0x224008: 0x24a539f8  addiu       $a1, $a1, 0x39F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224004u, 0x22400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22400Cu;
label_22400c:
    // 0x22400c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224010u;
    {
        const bool branch_taken_0x224010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224010u;
        // 0x224014: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224010) {
            ctx->pc = 0x224020u;
            goto label_224020;
        }
    }
    ctx->pc = 0x224018u;
    // 0x224018: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x224018u;
    {
        const bool branch_taken_0x224018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224018u;
        // 0x22401c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224018) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x224020u;
label_224020:
    // 0x224020: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224028: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224028u;
    SET_GPR_U32(ctx, 31, 0x224030u);
    ctx->pc = 0x22402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224028u;
    // 0x22402c: 0x24a53a10  addiu       $a1, $a1, 0x3A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224028u, 0x224030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224030u;
label_224030:
    // 0x224030: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224034: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224034u;
    {
        const bool branch_taken_0x224034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224034u;
        // 0x224038: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224034) {
            ctx->pc = 0x224044u;
            goto label_224044;
        }
    }
    ctx->pc = 0x22403Cu;
    // 0x22403c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x22403Cu;
    {
        const bool branch_taken_0x22403c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22403Cu;
        // 0x224040: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22403c) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x224044u;
label_224044:
    // 0x224044: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224048: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x224048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22404c: 0x24a53a18  addiu       $a1, $a1, 0x3A18
    ctx->pc = 0x22404cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14872));
    // 0x224050: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x224050u;
    {
        const bool branch_taken_0x224050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224050u;
        // 0x224054: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224050) {
            ctx->pc = 0x224310u;
            goto label_224310;
        }
    }
    ctx->pc = 0x224058u;
label_224058:
    // 0x224058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22405c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22405Cu;
    SET_GPR_U32(ctx, 31, 0x224064u);
    ctx->pc = 0x224060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22405Cu;
    // 0x224060: 0x24a53a38  addiu       $a1, $a1, 0x3A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22405Cu, 0x224064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224064u;
label_224064:
    // 0x224064: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224068: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x224068u;
    {
        const bool branch_taken_0x224068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224068u;
        // 0x22406c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224068) {
            ctx->pc = 0x2240DCu;
            goto label_2240dc;
        }
    }
    ctx->pc = 0x224070u;
    // 0x224070: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x224070u;
    SET_GPR_U32(ctx, 31, 0x224078u);
    ctx->pc = 0x224074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224070u;
    // 0x224074: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x224070u, 0x224078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224078u;
label_224078:
    // 0x224078: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x224078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22407c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22407Cu;
    SET_GPR_U32(ctx, 31, 0x224084u);
    ctx->pc = 0x224080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22407Cu;
    // 0x224080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22407Cu, 0x224084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224084u;
label_224084:
    // 0x224084: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224088: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22408c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22408Cu;
    SET_GPR_U32(ctx, 31, 0x224094u);
    ctx->pc = 0x224090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22408Cu;
    // 0x224090: 0x24a53a48  addiu       $a1, $a1, 0x3A48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22408Cu, 0x224094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224094u;
label_224094:
    // 0x224094: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224098: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224098u;
    {
        const bool branch_taken_0x224098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224098u;
        // 0x22409c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224098) {
            ctx->pc = 0x2240A8u;
            goto label_2240a8;
        }
    }
    ctx->pc = 0x2240A0u;
    // 0x2240a0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2240A0u;
    {
        const bool branch_taken_0x2240a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2240A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240A0u;
        // 0x2240a4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240a0) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x2240A8u;
label_2240a8:
    // 0x2240a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2240a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2240ACu;
    SET_GPR_U32(ctx, 31, 0x2240B4u);
    ctx->pc = 0x2240B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240ACu;
    // 0x2240b0: 0x24a53a50  addiu       $a1, $a1, 0x3A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2240ACu, 0x2240B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2240B4u;
label_2240b4:
    // 0x2240b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2240b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2240b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2240B8u;
    {
        const bool branch_taken_0x2240b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2240BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240B8u;
        // 0x2240bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240b8) {
            ctx->pc = 0x2240C8u;
            goto label_2240c8;
        }
    }
    ctx->pc = 0x2240C0u;
    // 0x2240c0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2240C0u;
    {
        const bool branch_taken_0x2240c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2240C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240C0u;
        // 0x2240c4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240c0) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x2240C8u;
label_2240c8:
    // 0x2240c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2240c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2240cc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2240ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2240d0: 0x24a53a60  addiu       $a1, $a1, 0x3A60
    ctx->pc = 0x2240d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14944));
    // 0x2240d4: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x2240D4u;
    {
        const bool branch_taken_0x2240d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2240D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240D4u;
        // 0x2240d8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240d4) {
            ctx->pc = 0x224310u;
            goto label_224310;
        }
    }
    ctx->pc = 0x2240DCu;
label_2240dc:
    // 0x2240dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2240dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2240e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2240e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2240E4u;
    SET_GPR_U32(ctx, 31, 0x2240ECu);
    ctx->pc = 0x2240E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240E4u;
    // 0x2240e8: 0x24a53a80  addiu       $a1, $a1, 0x3A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2240E4u, 0x2240ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2240ECu;
label_2240ec:
    // 0x2240ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2240ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2240f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2240F0u;
    {
        const bool branch_taken_0x2240f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2240F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240F0u;
        // 0x2240f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240f0) {
            ctx->pc = 0x224108u;
            goto label_224108;
        }
    }
    ctx->pc = 0x2240F8u;
    // 0x2240f8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2240F8u;
    SET_GPR_U32(ctx, 31, 0x224100u);
    ctx->pc = 0x2240FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240F8u;
    // 0x2240fc: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2240F8u, 0x224100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224100u;
label_224100:
    // 0x224100: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x224100u;
    {
        const bool branch_taken_0x224100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224100u;
        // 0x224104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224100) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x224108u;
label_224108:
    // 0x224108: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22410c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224110: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224110u;
    SET_GPR_U32(ctx, 31, 0x224118u);
    ctx->pc = 0x224114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224110u;
    // 0x224114: 0x24a53a88  addiu       $a1, $a1, 0x3A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224110u, 0x224118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224118u;
label_224118:
    // 0x224118: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22411c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22411Cu;
    {
        const bool branch_taken_0x22411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22411Cu;
        // 0x224120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22411c) {
            ctx->pc = 0x224134u;
            goto label_224134;
        }
    }
    ctx->pc = 0x224124u;
    // 0x224124: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224124u;
    SET_GPR_U32(ctx, 31, 0x22412Cu);
    ctx->pc = 0x224128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224124u;
    // 0x224128: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224124u, 0x22412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22412Cu;
label_22412c:
    // 0x22412c: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x22412Cu;
    {
        const bool branch_taken_0x22412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22412Cu;
        // 0x224130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22412c) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x224134u;
label_224134:
    // 0x224134: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22413c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22413Cu;
    SET_GPR_U32(ctx, 31, 0x224144u);
    ctx->pc = 0x224140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22413Cu;
    // 0x224140: 0x24a53a90  addiu       $a1, $a1, 0x3A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22413Cu, 0x224144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224144u;
label_224144:
    // 0x224144: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224148u;
    {
        const bool branch_taken_0x224148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224148u;
        // 0x22414c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224148) {
            ctx->pc = 0x224160u;
            goto label_224160;
        }
    }
    ctx->pc = 0x224150u;
    // 0x224150: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224150u;
    SET_GPR_U32(ctx, 31, 0x224158u);
    ctx->pc = 0x224154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224150u;
    // 0x224154: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224150u, 0x224158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224158u;
label_224158:
    // 0x224158: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x224158u;
    {
        const bool branch_taken_0x224158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224158u;
        // 0x22415c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224158) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x224160u;
label_224160:
    // 0x224160: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224168: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224168u;
    SET_GPR_U32(ctx, 31, 0x224170u);
    ctx->pc = 0x22416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224168u;
    // 0x22416c: 0x24a53aa0  addiu       $a1, $a1, 0x3AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224168u, 0x224170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224170u;
label_224170:
    // 0x224170: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224174: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224174u;
    {
        const bool branch_taken_0x224174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224174u;
        // 0x224178: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224174) {
            ctx->pc = 0x22418Cu;
            goto label_22418c;
        }
    }
    ctx->pc = 0x22417Cu;
    // 0x22417c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x22417Cu;
    SET_GPR_U32(ctx, 31, 0x224184u);
    ctx->pc = 0x224180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22417Cu;
    // 0x224180: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x22417Cu, 0x224184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224184u;
label_224184:
    // 0x224184: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x224184u;
    {
        const bool branch_taken_0x224184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224184u;
        // 0x224188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224184) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x22418Cu;
label_22418c:
    // 0x22418c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22418cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224194: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224194u;
    SET_GPR_U32(ctx, 31, 0x22419Cu);
    ctx->pc = 0x224198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224194u;
    // 0x224198: 0x24a53ab0  addiu       $a1, $a1, 0x3AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224194u, 0x22419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22419Cu;
label_22419c:
    // 0x22419c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22419cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2241a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2241A0u;
    {
        const bool branch_taken_0x2241a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241A0u;
        // 0x2241a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241a0) {
            ctx->pc = 0x2241B8u;
            goto label_2241b8;
        }
    }
    ctx->pc = 0x2241A8u;
    // 0x2241a8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2241A8u;
    SET_GPR_U32(ctx, 31, 0x2241B0u);
    ctx->pc = 0x2241ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2241A8u;
    // 0x2241ac: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2241A8u, 0x2241B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2241B0u;
label_2241b0:
    // 0x2241b0: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x2241B0u;
    {
        const bool branch_taken_0x2241b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241B0u;
        // 0x2241b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241b0) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x2241B8u;
label_2241b8:
    // 0x2241b8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2241b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2241bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2241bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241c0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2241C0u;
    SET_GPR_U32(ctx, 31, 0x2241C8u);
    ctx->pc = 0x2241C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2241C0u;
    // 0x2241c4: 0x24a53ac0  addiu       $a1, $a1, 0x3AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2241C0u, 0x2241C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2241C8u;
label_2241c8:
    // 0x2241c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2241c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2241cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2241CCu;
    {
        const bool branch_taken_0x2241cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241CCu;
        // 0x2241d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241cc) {
            ctx->pc = 0x2241E4u;
            goto label_2241e4;
        }
    }
    ctx->pc = 0x2241D4u;
    // 0x2241d4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2241D4u;
    SET_GPR_U32(ctx, 31, 0x2241DCu);
    ctx->pc = 0x2241D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2241D4u;
    // 0x2241d8: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2241D4u, 0x2241DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2241DCu;
label_2241dc:
    // 0x2241dc: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x2241DCu;
    {
        const bool branch_taken_0x2241dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241DCu;
        // 0x2241e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241dc) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x2241E4u;
label_2241e4:
    // 0x2241e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2241e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2241e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2241e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2241ECu;
    SET_GPR_U32(ctx, 31, 0x2241F4u);
    ctx->pc = 0x2241F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2241ECu;
    // 0x2241f0: 0x24a53ad0  addiu       $a1, $a1, 0x3AD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2241ECu, 0x2241F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2241F4u;
label_2241f4:
    // 0x2241f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2241f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2241f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2241F8u;
    {
        const bool branch_taken_0x2241f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241F8u;
        // 0x2241fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241f8) {
            ctx->pc = 0x224210u;
            goto label_224210;
        }
    }
    ctx->pc = 0x224200u;
    // 0x224200: 0xc09e056  jal         func_278158
    ctx->pc = 0x224200u;
    SET_GPR_U32(ctx, 31, 0x224208u);
    ctx->pc = 0x224204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224200u;
    // 0x224204: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x224200u, 0x224208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224208u;
label_224208:
    // 0x224208: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x224208u;
    {
        const bool branch_taken_0x224208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224208u;
        // 0x22420c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224208) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x224210u;
label_224210:
    // 0x224210: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224218: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224218u;
    SET_GPR_U32(ctx, 31, 0x224220u);
    ctx->pc = 0x22421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224218u;
    // 0x22421c: 0x24a53ae0  addiu       $a1, $a1, 0x3AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224218u, 0x224220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224220u;
label_224220:
    // 0x224220: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224224: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x224224u;
    {
        const bool branch_taken_0x224224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224224) {
            ctx->pc = 0x224228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224224u;
            // 0x224228: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22432Cu;
            goto label_22432c;
        }
    }
    ctx->pc = 0x22422Cu;
    // 0x22422c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22422Cu;
    SET_GPR_U32(ctx, 31, 0x224234u);
    ctx->pc = 0x224230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22422Cu;
    // 0x224230: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22422Cu, 0x224234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224234u;
label_224234:
    // 0x224234: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x224234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224238: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x224238u;
    SET_GPR_U32(ctx, 31, 0x224240u);
    ctx->pc = 0x22423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224238u;
    // 0x22423c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x224238u, 0x224240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224240u;
label_224240:
    // 0x224240: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224244: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224248: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224248u;
    SET_GPR_U32(ctx, 31, 0x224250u);
    ctx->pc = 0x22424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224248u;
    // 0x22424c: 0x24a51bb0  addiu       $a1, $a1, 0x1BB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224248u, 0x224250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224250u;
label_224250:
    // 0x224250: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224254u;
    {
        const bool branch_taken_0x224254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224254u;
        // 0x224258: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224254) {
            ctx->pc = 0x224264u;
            goto label_224264;
        }
    }
    ctx->pc = 0x22425Cu;
    // 0x22425c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x22425Cu;
    {
        const bool branch_taken_0x22425c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22425Cu;
        // 0x224260: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22425c) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x224264u;
label_224264:
    // 0x224264: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224268: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224268u;
    SET_GPR_U32(ctx, 31, 0x224270u);
    ctx->pc = 0x22426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224268u;
    // 0x22426c: 0x24a51bc0  addiu       $a1, $a1, 0x1BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224268u, 0x224270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224270u;
label_224270:
    // 0x224270: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224274: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224274u;
    {
        const bool branch_taken_0x224274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224274u;
        // 0x224278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224274) {
            ctx->pc = 0x224284u;
            goto label_224284;
        }
    }
    ctx->pc = 0x22427Cu;
    // 0x22427c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x22427Cu;
    {
        const bool branch_taken_0x22427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22427Cu;
        // 0x224280: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22427c) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x224284u;
label_224284:
    // 0x224284: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22428c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22428Cu;
    SET_GPR_U32(ctx, 31, 0x224294u);
    ctx->pc = 0x224290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22428Cu;
    // 0x224290: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22428Cu, 0x224294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224294u;
label_224294:
    // 0x224294: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224298u;
    {
        const bool branch_taken_0x224298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224298u;
        // 0x22429c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224298) {
            ctx->pc = 0x2242A8u;
            goto label_2242a8;
        }
    }
    ctx->pc = 0x2242A0u;
    // 0x2242a0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2242A0u;
    {
        const bool branch_taken_0x2242a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242A0u;
        // 0x2242a4: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242a0) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x2242A8u;
label_2242a8:
    // 0x2242a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2242a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2242ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2242acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2242b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2242B0u;
    SET_GPR_U32(ctx, 31, 0x2242B8u);
    ctx->pc = 0x2242B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2242B0u;
    // 0x2242b4: 0x24a51be0  addiu       $a1, $a1, 0x1BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2242B0u, 0x2242B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242B8u;
label_2242b8:
    // 0x2242b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2242b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2242bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2242BCu;
    {
        const bool branch_taken_0x2242bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242BCu;
        // 0x2242c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242bc) {
            ctx->pc = 0x2242CCu;
            goto label_2242cc;
        }
    }
    ctx->pc = 0x2242C4u;
    // 0x2242c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2242C4u;
    {
        const bool branch_taken_0x2242c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242C4u;
        // 0x2242c8: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242c4) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x2242CCu;
label_2242cc:
    // 0x2242cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2242ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2242d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2242d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2242d4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2242D4u;
    SET_GPR_U32(ctx, 31, 0x2242DCu);
    ctx->pc = 0x2242D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2242D4u;
    // 0x2242d8: 0x24a51bf0  addiu       $a1, $a1, 0x1BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2242D4u, 0x2242DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242DCu;
label_2242dc:
    // 0x2242dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2242dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2242e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2242E0u;
    {
        const bool branch_taken_0x2242e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242E0u;
        // 0x2242e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242e0) {
            ctx->pc = 0x2242F0u;
            goto label_2242f0;
        }
    }
    ctx->pc = 0x2242E8u;
    // 0x2242e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2242E8u;
    {
        const bool branch_taken_0x2242e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242E8u;
        // 0x2242ec: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242e8) {
            ctx->pc = 0x224318u;
            goto label_224318;
        }
    }
    ctx->pc = 0x2242F0u;
label_2242f0:
    // 0x2242f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2242f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2242f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2242f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2242f8: 0x24a53af0  addiu       $a1, $a1, 0x3AF0
    ctx->pc = 0x2242f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15088));
    // 0x2242fc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2242fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x224300: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x224300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x224304: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x224304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x224308: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x224308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22430c: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x22430cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_224310:
    // 0x224310: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x224310u;
    SET_GPR_U32(ctx, 31, 0x224318u);
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x224310u, 0x224318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224318u;
label_224318:
    // 0x224318: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22431c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x22431Cu;
    SET_GPR_U32(ctx, 31, 0x224324u);
    ctx->pc = 0x224320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22431Cu;
    // 0x224320: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x22431Cu, 0x224324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224324u;
label_224324:
    // 0x224324: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x224324u;
    {
        const bool branch_taken_0x224324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224324u;
        // 0x224328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224324) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x22432Cu;
label_22432c:
    // 0x22432c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224330: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224330u;
    SET_GPR_U32(ctx, 31, 0x224338u);
    ctx->pc = 0x224334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224330u;
    // 0x224334: 0x24a53b10  addiu       $a1, $a1, 0x3B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224330u, 0x224338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224338u;
label_224338:
    // 0x224338: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22433c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22433Cu;
    {
        const bool branch_taken_0x22433c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22433Cu;
        // 0x224340: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22433c) {
            ctx->pc = 0x224354u;
            goto label_224354;
        }
    }
    ctx->pc = 0x224344u;
    // 0x224344: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224344u;
    SET_GPR_U32(ctx, 31, 0x22434Cu);
    ctx->pc = 0x224348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224344u;
    // 0x224348: 0x2605002c  addiu       $a1, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224344u, 0x22434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22434Cu;
label_22434c:
    // 0x22434c: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x22434Cu;
    {
        const bool branch_taken_0x22434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22434Cu;
        // 0x224350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22434c) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x224354u;
label_224354:
    // 0x224354: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22435c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22435Cu;
    SET_GPR_U32(ctx, 31, 0x224364u);
    ctx->pc = 0x224360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22435Cu;
    // 0x224360: 0x24a53b20  addiu       $a1, $a1, 0x3B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22435Cu, 0x224364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224364u;
label_224364:
    // 0x224364: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224368: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224368u;
    {
        const bool branch_taken_0x224368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224368u;
        // 0x22436c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224368) {
            ctx->pc = 0x224380u;
            goto label_224380;
        }
    }
    ctx->pc = 0x224370u;
    // 0x224370: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224370u;
    SET_GPR_U32(ctx, 31, 0x224378u);
    ctx->pc = 0x224374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224370u;
    // 0x224374: 0x26050028  addiu       $a1, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224370u, 0x224378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224378u;
label_224378:
    // 0x224378: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x224378u;
    {
        const bool branch_taken_0x224378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224378u;
        // 0x22437c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224378) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x224380u;
label_224380:
    // 0x224380: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224388: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224388u;
    SET_GPR_U32(ctx, 31, 0x224390u);
    ctx->pc = 0x22438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224388u;
    // 0x22438c: 0x24a53b30  addiu       $a1, $a1, 0x3B30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224388u, 0x224390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224390u;
label_224390:
    // 0x224390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224394: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x224394u;
    {
        const bool branch_taken_0x224394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224394u;
        // 0x224398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224394) {
            ctx->pc = 0x2243C0u;
            goto label_2243c0;
        }
    }
    ctx->pc = 0x22439Cu;
    // 0x22439c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22439Cu;
    SET_GPR_U32(ctx, 31, 0x2243A4u);
    ctx->pc = 0x2243A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22439Cu;
    // 0x2243a0: 0x26050058  addiu       $a1, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22439Cu, 0x2243A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243A4u;
label_2243a4:
    // 0x2243a4: 0xc0d4306  jal         func_350C18
    ctx->pc = 0x2243A4u;
    SET_GPR_U32(ctx, 31, 0x2243ACu);
    ctx->pc = 0x2243A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2243A4u;
    // 0x2243a8: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C18u, 0x2243A4u, 0x2243ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243ACu;
label_2243ac:
    // 0x2243ac: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2243ACu;
    {
        const bool branch_taken_0x2243ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243ACu;
        // 0x2243b0: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243ac) {
            ctx->pc = 0x224614u;
            goto label_224614;
        }
    }
    ctx->pc = 0x2243B4u;
    // 0x2243b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2243b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2243b8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2243B8u;
    {
        const bool branch_taken_0x2243b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243B8u;
        // 0x2243bc: 0x8e060058  lw          $a2, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243b8) {
            ctx->pc = 0x22450Cu;
            goto label_22450c;
        }
    }
    ctx->pc = 0x2243C0u;
label_2243c0:
    // 0x2243c0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2243c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2243c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2243c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2243c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2243C8u;
    SET_GPR_U32(ctx, 31, 0x2243D0u);
    ctx->pc = 0x2243CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2243C8u;
    // 0x2243cc: 0x24a53b60  addiu       $a1, $a1, 0x3B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2243C8u, 0x2243D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243D0u;
label_2243d0:
    // 0x2243d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2243d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2243d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2243D4u;
    {
        const bool branch_taken_0x2243d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243D4u;
        // 0x2243d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243d4) {
            ctx->pc = 0x224400u;
            goto label_224400;
        }
    }
    ctx->pc = 0x2243DCu;
    // 0x2243dc: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2243DCu;
    SET_GPR_U32(ctx, 31, 0x2243E4u);
    ctx->pc = 0x2243E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2243DCu;
    // 0x2243e0: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2243DCu, 0x2243E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243E4u;
label_2243e4:
    // 0x2243e4: 0xc0d4306  jal         func_350C18
    ctx->pc = 0x2243E4u;
    SET_GPR_U32(ctx, 31, 0x2243ECu);
    ctx->pc = 0x2243E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2243E4u;
    // 0x2243e8: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C18u, 0x2243E4u, 0x2243ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243ECu;
label_2243ec:
    // 0x2243ec: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2243ECu;
    {
        const bool branch_taken_0x2243ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243ECu;
        // 0x2243f0: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243ec) {
            ctx->pc = 0x224614u;
            goto label_224614;
        }
    }
    ctx->pc = 0x2243F4u;
    // 0x2243f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2243f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2243f8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2243F8u;
    {
        const bool branch_taken_0x2243f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243F8u;
        // 0x2243fc: 0x8e060060  lw          $a2, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243f8) {
            ctx->pc = 0x22450Cu;
            goto label_22450c;
        }
    }
    ctx->pc = 0x224400u;
label_224400:
    // 0x224400: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224408: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224408u;
    SET_GPR_U32(ctx, 31, 0x224410u);
    ctx->pc = 0x22440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224408u;
    // 0x22440c: 0x24a53b70  addiu       $a1, $a1, 0x3B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224408u, 0x224410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224410u;
label_224410:
    // 0x224410: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224414: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x224414u;
    {
        const bool branch_taken_0x224414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224414u;
        // 0x224418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224414) {
            ctx->pc = 0x224448u;
            goto label_224448;
        }
    }
    ctx->pc = 0x22441Cu;
    // 0x22441c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22441Cu;
    SET_GPR_U32(ctx, 31, 0x224424u);
    ctx->pc = 0x224420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22441Cu;
    // 0x224420: 0x26050068  addiu       $a1, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22441Cu, 0x224424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224424u;
label_224424:
    // 0x224424: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x224424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x224428: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x224428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x22442c: 0xc0b0b82  jal         func_2C2E08
    ctx->pc = 0x22442Cu;
    SET_GPR_U32(ctx, 31, 0x224434u);
    ctx->pc = 0x224430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22442Cu;
    // 0x224430: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E08u, 0x22442Cu, 0x224434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224434u;
label_224434:
    // 0x224434: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x224434u;
    {
        const bool branch_taken_0x224434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224434u;
        // 0x224438: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224434) {
            ctx->pc = 0x224614u;
            goto label_224614;
        }
    }
    ctx->pc = 0x22443Cu;
    // 0x22443c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22443cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224440: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x224440u;
    {
        const bool branch_taken_0x224440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224440u;
        // 0x224444: 0x8e060068  lw          $a2, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224440) {
            ctx->pc = 0x22450Cu;
            goto label_22450c;
        }
    }
    ctx->pc = 0x224448u;
label_224448:
    // 0x224448: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22444c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22444cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224450: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224450u;
    SET_GPR_U32(ctx, 31, 0x224458u);
    ctx->pc = 0x224454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224450u;
    // 0x224454: 0x24a53b88  addiu       $a1, $a1, 0x3B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224450u, 0x224458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224458u;
label_224458:
    // 0x224458: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22445c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22445Cu;
    {
        const bool branch_taken_0x22445c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22445Cu;
        // 0x224460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22445c) {
            ctx->pc = 0x224488u;
            goto label_224488;
        }
    }
    ctx->pc = 0x224464u;
    // 0x224464: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x224464u;
    SET_GPR_U32(ctx, 31, 0x22446Cu);
    ctx->pc = 0x224468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224464u;
    // 0x224468: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x224464u, 0x22446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22446Cu;
label_22446c:
    // 0x22446c: 0xc0d4306  jal         func_350C18
    ctx->pc = 0x22446Cu;
    SET_GPR_U32(ctx, 31, 0x224474u);
    ctx->pc = 0x224470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22446Cu;
    // 0x224470: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C18u, 0x22446Cu, 0x224474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224474u;
label_224474:
    // 0x224474: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x224474u;
    {
        const bool branch_taken_0x224474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224474u;
        // 0x224478: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224474) {
            ctx->pc = 0x224614u;
            goto label_224614;
        }
    }
    ctx->pc = 0x22447Cu;
    // 0x22447c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22447cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224480: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x224480u;
    {
        const bool branch_taken_0x224480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224480u;
        // 0x224484: 0x8e060070  lw          $a2, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224480) {
            ctx->pc = 0x22450Cu;
            goto label_22450c;
        }
    }
    ctx->pc = 0x224488u;
label_224488:
    // 0x224488: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22448c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22448cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224490: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224490u;
    SET_GPR_U32(ctx, 31, 0x224498u);
    ctx->pc = 0x224494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224490u;
    // 0x224494: 0x24a53ba0  addiu       $a1, $a1, 0x3BA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224490u, 0x224498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224498u;
label_224498:
    // 0x224498: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22449c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22449Cu;
    {
        const bool branch_taken_0x22449c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22449Cu;
        // 0x2244a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22449c) {
            ctx->pc = 0x2244C8u;
            goto label_2244c8;
        }
    }
    ctx->pc = 0x2244A4u;
    // 0x2244a4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2244A4u;
    SET_GPR_U32(ctx, 31, 0x2244ACu);
    ctx->pc = 0x2244A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244A4u;
    // 0x2244a8: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2244A4u, 0x2244ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244ACu;
label_2244ac:
    // 0x2244ac: 0xc0d4306  jal         func_350C18
    ctx->pc = 0x2244ACu;
    SET_GPR_U32(ctx, 31, 0x2244B4u);
    ctx->pc = 0x2244B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244ACu;
    // 0x2244b0: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C18u, 0x2244ACu, 0x2244B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244B4u;
label_2244b4:
    // 0x2244b4: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2244B4u;
    {
        const bool branch_taken_0x2244b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2244B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244B4u;
        // 0x2244b8: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244b4) {
            ctx->pc = 0x224614u;
            goto label_224614;
        }
    }
    ctx->pc = 0x2244BCu;
    // 0x2244bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2244bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2244c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2244C0u;
    {
        const bool branch_taken_0x2244c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244C0u;
        // 0x2244c4: 0x8e060080  lw          $a2, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244c0) {
            ctx->pc = 0x22450Cu;
            goto label_22450c;
        }
    }
    ctx->pc = 0x2244C8u;
label_2244c8:
    // 0x2244c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2244c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2244cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2244ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2244D0u;
    SET_GPR_U32(ctx, 31, 0x2244D8u);
    ctx->pc = 0x2244D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244D0u;
    // 0x2244d4: 0x24a53bb0  addiu       $a1, $a1, 0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2244D0u, 0x2244D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244D8u;
label_2244d8:
    // 0x2244d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2244d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2244dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2244DCu;
    {
        const bool branch_taken_0x2244dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244DCu;
        // 0x2244e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244dc) {
            ctx->pc = 0x224520u;
            goto label_224520;
        }
    }
    ctx->pc = 0x2244E4u;
    // 0x2244e4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2244E4u;
    SET_GPR_U32(ctx, 31, 0x2244ECu);
    ctx->pc = 0x2244E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244E4u;
    // 0x2244e8: 0x26050088  addiu       $a1, $s0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2244E4u, 0x2244ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244ECu;
label_2244ec:
    // 0x2244ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2244ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2244f0: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x2244f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2244f4: 0xc0b0b82  jal         func_2C2E08
    ctx->pc = 0x2244F4u;
    SET_GPR_U32(ctx, 31, 0x2244FCu);
    ctx->pc = 0x2244F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244F4u;
    // 0x2244f8: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E08u, 0x2244F4u, 0x2244FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244FCu;
label_2244fc:
    // 0x2244fc: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2244FCu;
    {
        const bool branch_taken_0x2244fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244FCu;
        // 0x224500: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244fc) {
            ctx->pc = 0x224614u;
            goto label_224614;
        }
    }
    ctx->pc = 0x224504u;
    // 0x224504: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224508: 0x8e060088  lw          $a2, 0x88($s0)
    ctx->pc = 0x224508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_22450c:
    // 0x22450c: 0x24a53b40  addiu       $a1, $a1, 0x3B40
    ctx->pc = 0x22450cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15168));
    // 0x224510: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x224510u;
    SET_GPR_U32(ctx, 31, 0x224518u);
    ctx->pc = 0x224514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224510u;
    // 0x224514: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x224510u, 0x224518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224518u;
label_224518:
    // 0x224518: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x224518u;
    {
        const bool branch_taken_0x224518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224518u;
        // 0x22451c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224518) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x224520u;
label_224520:
    // 0x224520: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224528: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224528u;
    SET_GPR_U32(ctx, 31, 0x224530u);
    ctx->pc = 0x22452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224528u;
    // 0x22452c: 0x24a53bc0  addiu       $a1, $a1, 0x3BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224528u, 0x224530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224530u;
label_224530:
    // 0x224530: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224534: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224534u;
    {
        const bool branch_taken_0x224534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224534u;
        // 0x224538: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224534) {
            ctx->pc = 0x22454Cu;
            goto label_22454c;
        }
    }
    ctx->pc = 0x22453Cu;
    // 0x22453c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x22453Cu;
    SET_GPR_U32(ctx, 31, 0x224544u);
    ctx->pc = 0x224540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22453Cu;
    // 0x224540: 0x26050038  addiu       $a1, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x22453Cu, 0x224544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224544u;
label_224544:
    // 0x224544: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x224544u;
    {
        const bool branch_taken_0x224544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224544u;
        // 0x224548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224544) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x22454Cu;
label_22454c:
    // 0x22454c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22454cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224554: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224554u;
    SET_GPR_U32(ctx, 31, 0x22455Cu);
    ctx->pc = 0x224558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224554u;
    // 0x224558: 0x24a53bd8  addiu       $a1, $a1, 0x3BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224554u, 0x22455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22455Cu;
label_22455c:
    // 0x22455c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224560: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224560u;
    {
        const bool branch_taken_0x224560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224560u;
        // 0x224564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224560) {
            ctx->pc = 0x224580u;
            goto label_224580;
        }
    }
    ctx->pc = 0x224568u;
    // 0x224568: 0x2607003e  addiu       $a3, $s0, 0x3E
    ctx->pc = 0x224568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 62));
    // 0x22456c: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x22456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x224570: 0xc09df42  jal         func_277D08
    ctx->pc = 0x224570u;
    SET_GPR_U32(ctx, 31, 0x224578u);
    ctx->pc = 0x224574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224570u;
    // 0x224574: 0x2606003d  addiu       $a2, $s0, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D08u, 0x224570u, 0x224578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224578u;
label_224578:
    // 0x224578: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x224578u;
    {
        const bool branch_taken_0x224578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224578u;
        // 0x22457c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224578) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x224580u;
label_224580:
    // 0x224580: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224588: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224588u;
    SET_GPR_U32(ctx, 31, 0x224590u);
    ctx->pc = 0x22458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224588u;
    // 0x22458c: 0x24a53be8  addiu       $a1, $a1, 0x3BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224588u, 0x224590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224590u;
label_224590:
    // 0x224590: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224594: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x224594u;
    {
        const bool branch_taken_0x224594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224594u;
        // 0x224598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224594) {
            ctx->pc = 0x2245C8u;
            goto label_2245c8;
        }
    }
    ctx->pc = 0x22459Cu;
    // 0x22459c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x22459cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2245a0: 0x27a600b4  addiu       $a2, $sp, 0xB4
    ctx->pc = 0x2245a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2245a4: 0xc09e002  jal         func_278008
    ctx->pc = 0x2245A4u;
    SET_GPR_U32(ctx, 31, 0x2245ACu);
    ctx->pc = 0x2245A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245A4u;
    // 0x2245a8: 0x27a700b8  addiu       $a3, $sp, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278008u, 0x2245A4u, 0x2245ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245ACu;
label_2245ac:
    // 0x2245ac: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2245acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2245b0: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x2245b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2245b4: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2245b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2245b8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2245b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2245bc: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x2245bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2245c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2245C0u;
    {
        const bool branch_taken_0x2245c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2245C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245C0u;
        // 0x2245c4: 0xe6020048  swc1        $f2, 0x48($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245c0) {
            ctx->pc = 0x224614u;
            goto label_224614;
        }
    }
    ctx->pc = 0x2245C8u;
label_2245c8:
    // 0x2245c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2245c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2245cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2245ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2245d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2245D0u;
    SET_GPR_U32(ctx, 31, 0x2245D8u);
    ctx->pc = 0x2245D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245D0u;
    // 0x2245d4: 0x24a53c00  addiu       $a1, $a1, 0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2245D0u, 0x2245D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245D8u;
label_2245d8:
    // 0x2245d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2245d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2245dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2245DCu;
    {
        const bool branch_taken_0x2245dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2245E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245DCu;
        // 0x2245e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245dc) {
            ctx->pc = 0x2245ECu;
            goto label_2245ec;
        }
    }
    ctx->pc = 0x2245E4u;
    // 0x2245e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2245E4u;
    {
        const bool branch_taken_0x2245e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2245E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245E4u;
        // 0x2245e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245e4) {
            ctx->pc = 0x224618u;
            goto label_224618;
        }
    }
    ctx->pc = 0x2245ECu;
label_2245ec:
    // 0x2245ec: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x2245ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2245f0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2245f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2245f4: 0xc09e002  jal         func_278008
    ctx->pc = 0x2245F4u;
    SET_GPR_U32(ctx, 31, 0x2245FCu);
    ctx->pc = 0x2245F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245F4u;
    // 0x2245f8: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278008u, 0x2245F4u, 0x2245FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245FCu;
label_2245fc:
    // 0x2245fc: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2245fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224600: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x224600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224604: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x224604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224608: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x224608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x22460c: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x22460cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x224610: 0xe602004c  swc1        $f2, 0x4C($s0)
    ctx->pc = 0x224610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_224614:
    // 0x224614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224618:
    // 0x224618: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x224618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22461c: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x22461cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x224620: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x224620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x224624: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x224624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x224628: 0x3e00008  jr          $ra
    ctx->pc = 0x224628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224628u;
        // 0x22462c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224630u;
}
