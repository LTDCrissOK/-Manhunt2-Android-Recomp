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

// Function: sub_0031DE80
// Address: 0x31de80 - 0x31dfb8
void sub_0031DE80_0x31de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DE80_0x31de80");
#endif

    switch (ctx->pc) {
        case 0x31de9cu: goto label_31de9c;
        case 0x31deacu: goto label_31deac;
        case 0x31deb8u: goto label_31deb8;
        case 0x31dec4u: goto label_31dec4;
        case 0x31ded8u: goto label_31ded8;
        case 0x31def0u: goto label_31def0;
        case 0x31df10u: goto label_31df10;
        case 0x31df28u: goto label_31df28;
        case 0x31df3cu: goto label_31df3c;
        case 0x31df54u: goto label_31df54;
        case 0x31df70u: goto label_31df70;
        case 0x31df7cu: goto label_31df7c;
        case 0x31df8cu: goto label_31df8c;
        case 0x31df98u: goto label_31df98;
        case 0x31dfa4u: goto label_31dfa4;
        default: break;
    }

    ctx->pc = 0x31de80u;

    // 0x31de80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31de80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31de84: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x31de84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x31de88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31de88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31de8c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x31de8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x31de90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x31de90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x31de94: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x31DE94u;
    SET_GPR_U32(ctx, 31, 0x31DE9Cu);
    ctx->pc = 0x31DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE94u;
    // 0x31de98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x31DE94u, 0x31DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE9Cu;
label_31de9c:
    // 0x31de9c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x31de9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31dea0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31dea4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31DEA4u;
    SET_GPR_U32(ctx, 31, 0x31DEACu);
    ctx->pc = 0x31DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DEA4u;
    // 0x31dea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31DEA4u, 0x31DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DEACu;
label_31deac:
    // 0x31deac: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x31DEACu;
    {
        const bool branch_taken_0x31deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEACu;
        // 0x31deb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31deac) {
            ctx->pc = 0x31DF74u;
            goto label_31df74;
        }
    }
    ctx->pc = 0x31DEB4u;
    // 0x31deb4: 0x0  nop
    ctx->pc = 0x31deb4u;
    // NOP
label_31deb8:
    // 0x31deb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31deb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31debc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31DEBCu;
    SET_GPR_U32(ctx, 31, 0x31DEC4u);
    ctx->pc = 0x31DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DEBCu;
    // 0x31dec0: 0x24a54508  addiu       $a1, $a1, 0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31DEBCu, 0x31DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DEC4u;
label_31dec4:
    // 0x31dec4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31dec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31dec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DEC8u;
    {
        const bool branch_taken_0x31dec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEC8u;
        // 0x31decc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dec8) {
            ctx->pc = 0x31DEE0u;
            goto label_31dee0;
        }
    }
    ctx->pc = 0x31DED0u;
    // 0x31ded0: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31DED0u;
    SET_GPR_U32(ctx, 31, 0x31DED8u);
    ctx->pc = 0x31DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DED0u;
    // 0x31ded4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31DED0u, 0x31DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DED8u;
label_31ded8:
    // 0x31ded8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x31DED8u;
    {
        const bool branch_taken_0x31ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DED8u;
        // 0x31dedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ded8) {
            ctx->pc = 0x31DF74u;
            goto label_31df74;
        }
    }
    ctx->pc = 0x31DEE0u;
label_31dee0:
    // 0x31dee0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31dee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31dee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31dee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dee8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31DEE8u;
    SET_GPR_U32(ctx, 31, 0x31DEF0u);
    ctx->pc = 0x31DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DEE8u;
    // 0x31deec: 0x24a54518  addiu       $a1, $a1, 0x4518 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31DEE8u, 0x31DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DEF0u;
label_31def0:
    // 0x31def0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31def0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31def4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31DEF4u;
    {
        const bool branch_taken_0x31def4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEF4u;
        // 0x31def8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31def4) {
            ctx->pc = 0x31DF18u;
            goto label_31df18;
        }
    }
    ctx->pc = 0x31DEFCu;
    // 0x31defc: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x31defcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x31df00: 0x37a6000c  ori         $a2, $sp, 0xC
    ctx->pc = 0x31df00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x31df04: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x31df04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31df08: 0xc09df8e  jal         func_277E38
    ctx->pc = 0x31DF08u;
    SET_GPR_U32(ctx, 31, 0x31DF10u);
    ctx->pc = 0x31DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF08u;
    // 0x31df0c: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277E38u, 0x31DF08u, 0x31DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF10u;
label_31df10:
    // 0x31df10: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31DF10u;
    {
        const bool branch_taken_0x31df10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF10u;
        // 0x31df14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df10) {
            ctx->pc = 0x31DF74u;
            goto label_31df74;
        }
    }
    ctx->pc = 0x31DF18u;
label_31df18:
    // 0x31df18: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31df18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31df1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31df1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31df20: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31DF20u;
    SET_GPR_U32(ctx, 31, 0x31DF28u);
    ctx->pc = 0x31DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF20u;
    // 0x31df24: 0x24a54528  addiu       $a1, $a1, 0x4528 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31DF20u, 0x31DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF28u;
label_31df28:
    // 0x31df28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31df2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DF2Cu;
    {
        const bool branch_taken_0x31df2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF2Cu;
        // 0x31df30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df2c) {
            ctx->pc = 0x31DF44u;
            goto label_31df44;
        }
    }
    ctx->pc = 0x31DF34u;
    // 0x31df34: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31DF34u;
    SET_GPR_U32(ctx, 31, 0x31DF3Cu);
    ctx->pc = 0x31DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF34u;
    // 0x31df38: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31DF34u, 0x31DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF3Cu;
label_31df3c:
    // 0x31df3c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31DF3Cu;
    {
        const bool branch_taken_0x31df3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF3Cu;
        // 0x31df40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df3c) {
            ctx->pc = 0x31DF74u;
            goto label_31df74;
        }
    }
    ctx->pc = 0x31DF44u;
label_31df44:
    // 0x31df44: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31df44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31df48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31df48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31df4c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31DF4Cu;
    SET_GPR_U32(ctx, 31, 0x31DF54u);
    ctx->pc = 0x31DF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF4Cu;
    // 0x31df50: 0x24a54538  addiu       $a1, $a1, 0x4538 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31DF4Cu, 0x31DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF54u;
label_31df54:
    // 0x31df54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31df58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DF58u;
    {
        const bool branch_taken_0x31df58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF58u;
        // 0x31df5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df58) {
            ctx->pc = 0x31DF70u;
            goto label_31df70;
        }
    }
    ctx->pc = 0x31DF60u;
    // 0x31df60: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x31df60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x31df64: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31df64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31df68: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31DF68u;
    SET_GPR_U32(ctx, 31, 0x31DF70u);
    ctx->pc = 0x31DF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF68u;
    // 0x31df6c: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31DF68u, 0x31DF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF70u;
label_31df70:
    // 0x31df70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31df70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31df74:
    // 0x31df74: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x31DF74u;
    SET_GPR_U32(ctx, 31, 0x31DF7Cu);
    ctx->pc = 0x31DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF74u;
    // 0x31df78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x31DF74u, 0x31DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF7Cu;
label_31df7c:
    // 0x31df7c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x31DF7Cu;
    {
        const bool branch_taken_0x31df7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF7Cu;
        // 0x31df80: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df7c) {
            ctx->pc = 0x31DEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31deb8;
        }
    }
    ctx->pc = 0x31DF84u;
    // 0x31df84: 0xc0d6ebe  jal         func_35BAF8
    ctx->pc = 0x31DF84u;
    SET_GPR_U32(ctx, 31, 0x31DF8Cu);
    ctx->pc = 0x31DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF84u;
    // 0x31df88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BAF8u, 0x31DF84u, 0x31DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF8Cu;
label_31df8c:
    // 0x31df8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31df8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31df90: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31DF90u;
    SET_GPR_U32(ctx, 31, 0x31DF98u);
    ctx->pc = 0x31DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF90u;
    // 0x31df94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31DF90u, 0x31DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF98u;
label_31df98:
    // 0x31df98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31df98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31df9c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31DF9Cu;
    SET_GPR_U32(ctx, 31, 0x31DFA4u);
    ctx->pc = 0x31DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF9Cu;
    // 0x31dfa0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31DF9Cu, 0x31DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFA4u;
label_31dfa4:
    // 0x31dfa4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x31dfa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31dfa8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x31dfa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31dfac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x31dfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31dfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x31DFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFB0u;
        // 0x31dfb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DFB8u;
}
