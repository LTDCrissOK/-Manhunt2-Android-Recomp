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

// Function: sub_00130968
// Address: 0x130968 - 0x130a30
void sub_00130968_0x130968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130968_0x130968");
#endif

    switch (ctx->pc) {
        case 0x1309a0u: goto label_1309a0;
        case 0x1309b8u: goto label_1309b8;
        case 0x1309c4u: goto label_1309c4;
        case 0x1309d0u: goto label_1309d0;
        case 0x1309e8u: goto label_1309e8;
        case 0x1309f4u: goto label_1309f4;
        case 0x130a00u: goto label_130a00;
        case 0x130a08u: goto label_130a08;
        default: break;
    }

    ctx->pc = 0x130968u;

    // 0x130968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13096c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13096cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130970: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130974: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130978: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13097c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130980: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x130980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x130984: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x130984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x130988: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x130988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13098c: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x13098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130990: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x130990u;
    {
        const bool branch_taken_0x130990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130990u;
        // 0x130994: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130990) {
            ctx->pc = 0x1309A8u;
            goto label_1309a8;
        }
    }
    ctx->pc = 0x130998u;
    // 0x130998: 0xc0460e4  jal         func_118390
    ctx->pc = 0x130998u;
    SET_GPR_U32(ctx, 31, 0x1309A0u);
    ctx->pc = 0x13099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130998u;
    // 0x13099c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x130998u, 0x1309A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309A0u;
label_1309a0:
    // 0x1309a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1309A0u;
    {
        const bool branch_taken_0x1309a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1309a0) {
            ctx->pc = 0x1309A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1309A0u;
            // 0x1309a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1309B0u;
            goto label_1309b0;
        }
    }
    ctx->pc = 0x1309A8u;
label_1309a8:
    // 0x1309a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1309A8u;
    {
        const bool branch_taken_0x1309a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309A8u;
        // 0x1309ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309a8) {
            ctx->pc = 0x130A10u;
            goto label_130a10;
        }
    }
    ctx->pc = 0x1309B0u;
label_1309b0:
    // 0x1309b0: 0xc046002  jal         func_118008
    ctx->pc = 0x1309B0u;
    SET_GPR_U32(ctx, 31, 0x1309B8u);
    ctx->pc = 0x1309B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309B0u;
    // 0x1309b4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x1309B0u, 0x1309B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309B8u;
label_1309b8:
    // 0x1309b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1309b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309bc: 0xc046272  jal         func_1189C8
    ctx->pc = 0x1309BCu;
    SET_GPR_U32(ctx, 31, 0x1309C4u);
    ctx->pc = 0x1309C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309BCu;
    // 0x1309c0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x1309BCu, 0x1309C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309C4u;
label_1309c4:
    // 0x1309c4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1309c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1309c8: 0xc043920  jal         func_10E480
    ctx->pc = 0x1309C8u;
    SET_GPR_U32(ctx, 31, 0x1309D0u);
    ctx->pc = 0x1309CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309C8u;
    // 0x1309cc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x1309C8u, 0x1309D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309D0u;
label_1309d0:
    // 0x1309d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1309d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309d4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1309D4u;
    {
        const bool branch_taken_0x1309d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309D4u;
        // 0x1309d8: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309d4) {
            ctx->pc = 0x130A10u;
            goto label_130a10;
        }
    }
    ctx->pc = 0x1309DCu;
    // 0x1309dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1309dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309e0: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x1309E0u;
    SET_GPR_U32(ctx, 31, 0x1309E8u);
    ctx->pc = 0x1309E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309E0u;
    // 0x1309e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x1309E0u, 0x1309E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309E8u;
label_1309e8:
    // 0x1309e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1309e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309ec: 0xc09519a  jal         func_254668
    ctx->pc = 0x1309ECu;
    SET_GPR_U32(ctx, 31, 0x1309F4u);
    ctx->pc = 0x1309F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309ECu;
    // 0x1309f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254668u, 0x1309ECu, 0x1309F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309F4u;
label_1309f4:
    // 0x1309f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1309f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309f8: 0xc0952fe  jal         func_254BF8
    ctx->pc = 0x1309F8u;
    SET_GPR_U32(ctx, 31, 0x130A00u);
    ctx->pc = 0x1309FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309F8u;
    // 0x1309fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BF8u, 0x1309F8u, 0x130A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A00u;
label_130a00:
    // 0x130a00: 0xc095216  jal         func_254858
    ctx->pc = 0x130A00u;
    SET_GPR_U32(ctx, 31, 0x130A08u);
    ctx->pc = 0x130A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A00u;
    // 0x130a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x130A00u, 0x130A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A08u;
label_130a08:
    // 0x130a08: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x130a08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x130a0c: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x130a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_130a10:
    // 0x130a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130a14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130a18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130a1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130a1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130a20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x130a20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130a24: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x130a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x130a28: 0x3e00008  jr          $ra
    ctx->pc = 0x130A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A28u;
        // 0x130a2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130A30u;
}
