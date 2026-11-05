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

// Function: sub_003BCDE0
// Address: 0x3bcde0 - 0x3bce48
void sub_003BCDE0_0x3bcde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCDE0_0x3bcde0");
#endif

    switch (ctx->pc) {
        case 0x3bcdf8u: goto label_3bcdf8;
        case 0x3bce04u: goto label_3bce04;
        case 0x3bce34u: goto label_3bce34;
        default: break;
    }

    ctx->pc = 0x3bcde0u;

    // 0x3bcde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bcde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bcde4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bcde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bcde8: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3bcde8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3bcdec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bcdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bcdf0: 0xc0f2624  jal         func_3C9890
    ctx->pc = 0x3BCDF0u;
    SET_GPR_U32(ctx, 31, 0x3BCDF8u);
    ctx->pc = 0x3BCDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCDF0u;
    // 0x3bcdf4: 0x2610c240  addiu       $s0, $s0, -0x3DC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9890u, 0x3BCDF0u, 0x3BCDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCDF8u;
label_3bcdf8:
    // 0x3bcdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bcdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcdfc: 0xc0f350c  jal         func_3CD430
    ctx->pc = 0x3BCDFCu;
    SET_GPR_U32(ctx, 31, 0x3BCE04u);
    ctx->pc = 0x3BCE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCDFCu;
    // 0x3bce00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD430u, 0x3BCDFCu, 0x3BCE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCE04u;
label_3bce04:
    // 0x3bce04: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3bce04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3bce08: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x3bce08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x3bce0c: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3bce0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3bce10: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3bce10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3bce14: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x3bce14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bce18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bce18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bce1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3bce1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bce20: 0x24c6d220  addiu       $a2, $a2, -0x2DE0
    ctx->pc = 0x3bce20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955552));
    // 0x3bce24: 0x24e7c2c0  addiu       $a3, $a3, -0x3D40
    ctx->pc = 0x3bce24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951616));
    // 0x3bce28: 0x2484c258  addiu       $a0, $a0, -0x3DA8
    ctx->pc = 0x3bce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951512));
    // 0x3bce2c: 0xc0f3532  jal         func_3CD4C8
    ctx->pc = 0x3BCE2Cu;
    SET_GPR_U32(ctx, 31, 0x3BCE34u);
    ctx->pc = 0x3BCE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCE2Cu;
    // 0x3bce30: 0x34a50400  ori         $a1, $a1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD4C8u, 0x3BCE2Cu, 0x3BCE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCE34u;
label_3bce34:
    // 0x3bce34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bce38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bce38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bce3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bce3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bce40: 0x80f35f0  j           func_3CD7C0
    ctx->pc = 0x3BCE40u;
    ctx->pc = 0x3BCE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCE40u;
    // 0x3bce44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD7C0u, 0x3BCE40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BCE48u;
}
