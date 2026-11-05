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

// Function: sub_00175930
// Address: 0x175930 - 0x175988
void sub_00175930_0x175930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175930_0x175930");
#endif

    switch (ctx->pc) {
        case 0x175960u: goto label_175960;
        case 0x175970u: goto label_175970;
        default: break;
    }

    ctx->pc = 0x175930u;

    // 0x175930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175938: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17593c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17593cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175940: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175944: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x175944u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x175948: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17594c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x175950: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x175950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x175954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175958: 0xc04efc0  jal         func_13BF00
    ctx->pc = 0x175958u;
    SET_GPR_U32(ctx, 31, 0x175960u);
    ctx->pc = 0x17595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175958u;
    // 0x17595c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BF00u, 0x175958u, 0x175960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175960u;
label_175960:
    // 0x175960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x175964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175968: 0xc04f8e0  jal         func_13E380
    ctx->pc = 0x175968u;
    SET_GPR_U32(ctx, 31, 0x175970u);
    ctx->pc = 0x17596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175968u;
    // 0x17596c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E380u, 0x175968u, 0x175970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175970u;
label_175970:
    // 0x175970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17597c: 0x3e00008  jr          $ra
    ctx->pc = 0x17597Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17597Cu;
        // 0x175980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17597Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175984u;
    // 0x175984: 0x0  nop
    ctx->pc = 0x175984u;
    // NOP
    ctx->pc = 0x175988u;
}
