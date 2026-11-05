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

// Function: sub_00162968
// Address: 0x162968 - 0x162a28
void sub_00162968_0x162968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162968_0x162968");
#endif

    switch (ctx->pc) {
        case 0x1629a0u: goto label_1629a0;
        case 0x1629e8u: goto label_1629e8;
        case 0x1629f4u: goto label_1629f4;
        default: break;
    }

    ctx->pc = 0x162968u;

    // 0x162968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16296c: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x16296cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x162970: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162974: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x162974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162978: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16297c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162980: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x162980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x162984: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x162984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162988: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x162988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16298c: 0x26060228  addiu       $a2, $s0, 0x228
    ctx->pc = 0x16298cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x162990: 0x2604022c  addiu       $a0, $s0, 0x22C
    ctx->pc = 0x162990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x162994: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x162994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162998: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x162998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x16299c: 0x0  nop
    ctx->pc = 0x16299cu;
    // NOP
label_1629a0:
    // 0x1629a0: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x1629a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1629a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1629a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1629a8: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1629A8u;
    {
        const bool branch_taken_0x1629a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1629ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629A8u;
        // 0x1629ac: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629a8) {
            ctx->pc = 0x1629FCu;
            goto label_1629fc;
        }
    }
    ctx->pc = 0x1629B0u;
    // 0x1629b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1629b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1629b4: 0x38430009  xori        $v1, $v0, 0x9
    ctx->pc = 0x1629b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x1629b8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1629B8u;
    {
        const bool branch_taken_0x1629b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1629b8) {
            ctx->pc = 0x1629E0u;
            goto label_1629e0;
        }
    }
    ctx->pc = 0x1629C0u;
    // 0x1629c0: 0x14480005  bne         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1629C0u;
    {
        const bool branch_taken_0x1629c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x1629C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629C0u;
        // 0x1629c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629c0) {
            ctx->pc = 0x1629D8u;
            goto label_1629d8;
        }
    }
    ctx->pc = 0x1629C8u;
    // 0x1629c8: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x1629c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x1629cc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1629ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629d0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1629d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1629d4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1629d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1629d8:
    // 0x1629d8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1629D8u;
    {
        const bool branch_taken_0x1629d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1629DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629D8u;
        // 0x1629dc: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629d8) {
            ctx->pc = 0x162A00u;
            goto label_162a00;
        }
    }
    ctx->pc = 0x1629E0u;
label_1629e0:
    // 0x1629e0: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x1629E0u;
    SET_GPR_U32(ctx, 31, 0x1629E8u);
    ctx->pc = 0x1629E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1629E0u;
    // 0x1629e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x1629E0u, 0x1629E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1629E8u;
label_1629e8:
    // 0x1629e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1629e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629ec: 0xc04f372  jal         func_13CDC8
    ctx->pc = 0x1629ECu;
    SET_GPR_U32(ctx, 31, 0x1629F4u);
    ctx->pc = 0x1629F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1629ECu;
    // 0x1629f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDC8u, 0x1629ECu, 0x1629F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1629F4u;
label_1629f4:
    // 0x1629f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1629F4u;
    {
        const bool branch_taken_0x1629f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1629F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629F4u;
        // 0x1629f8: 0xae120354  sw          $s2, 0x354($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629f4) {
            ctx->pc = 0x162A10u;
            goto label_162a10;
        }
    }
    ctx->pc = 0x1629FCu;
label_1629fc:
    // 0x1629fc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1629fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_162a00:
    // 0x162a00: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x162a00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x162a04: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x162a04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x162a08: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x162A08u;
    {
        const bool branch_taken_0x162a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A08u;
        // 0x162a0c: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a08) {
            ctx->pc = 0x1629A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1629a0;
        }
    }
    ctx->pc = 0x162A10u;
label_162a10:
    // 0x162a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162a14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162a18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162a1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x162a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162a20: 0x3e00008  jr          $ra
    ctx->pc = 0x162A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A20u;
        // 0x162a24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162A28u;
}
