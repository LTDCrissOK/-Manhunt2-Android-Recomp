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

// Function: sub_00394968
// Address: 0x394968 - 0x394a00
void sub_00394968_0x394968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394968_0x394968");
#endif

    switch (ctx->pc) {
        case 0x39497cu: goto label_39497c;
        case 0x394998u: goto label_394998;
        case 0x3949b4u: goto label_3949b4;
        default: break;
    }

    ctx->pc = 0x394968u;

    // 0x394968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x394968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39496c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39496cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x394970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x394974: 0xc0e5242  jal         func_394908
    ctx->pc = 0x394974u;
    SET_GPR_U32(ctx, 31, 0x39497Cu);
    ctx->pc = 0x394908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394908u, 0x394974u, 0x39497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39497Cu;
label_39497c:
    // 0x39497c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39497cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394980: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x394980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x394984: 0x2484a768  addiu       $a0, $a0, -0x5898
    ctx->pc = 0x394984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944616));
    // 0x394988: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x394988u;
    {
        const bool branch_taken_0x394988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394988u;
        // 0x39498c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394988) {
            ctx->pc = 0x3949ACu;
            goto label_3949ac;
        }
    }
    ctx->pc = 0x394990u;
    // 0x394990: 0xc0e65b2  jal         func_3996C8
    ctx->pc = 0x394990u;
    SET_GPR_U32(ctx, 31, 0x394998u);
    ctx->pc = 0x394994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394990u;
    // 0x394994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3996C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3996C8u, 0x394990u, 0x394998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394998u;
label_394998:
    // 0x394998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x394998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39499c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39499cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3949a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3949a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3949a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3949A4u;
    {
        const bool branch_taken_0x3949a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3949A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949A4u;
        // 0x3949a8: 0x2484a7a0  addiu       $a0, $a0, -0x5860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949a4) {
            ctx->pc = 0x3949C0u;
            goto label_3949c0;
        }
    }
    ctx->pc = 0x3949ACu;
label_3949ac:
    // 0x3949ac: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x3949ACu;
    SET_GPR_U32(ctx, 31, 0x3949B4u);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3949ACu, 0x3949B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3949B4u;
label_3949b4:
    // 0x3949b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3949B4u;
    {
        const bool branch_taken_0x3949b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3949B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949B4u;
        // 0x3949b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949b4) {
            ctx->pc = 0x3949ECu;
            goto label_3949ec;
        }
    }
    ctx->pc = 0x3949BCu;
    // 0x3949bc: 0x0  nop
    ctx->pc = 0x3949bcu;
    // NOP
label_3949c0:
    // 0x3949c0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3949c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3949c4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3949c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3949c8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3949c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3949cc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3949ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3949d0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3949d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x3949d4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3949d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x3949d8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3949d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3949dc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3949dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3949e0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3949e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3949e4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x3949e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x3949e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3949e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3949ec:
    // 0x3949ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3949ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3949f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3949f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3949f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3949F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3949F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949F4u;
        // 0x3949f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3949F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3949FCu;
    // 0x3949fc: 0x0  nop
    ctx->pc = 0x3949fcu;
    // NOP
    ctx->pc = 0x394a00u;
}
