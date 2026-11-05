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

// Function: sub_00136388
// Address: 0x136388 - 0x1363c8
void sub_00136388_0x136388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136388_0x136388");
#endif

    switch (ctx->pc) {
        case 0x1363a8u: goto label_1363a8;
        default: break;
    }

    ctx->pc = 0x136388u;

    // 0x136388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13638c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136390: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136394: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x136394u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x136398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13639c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13639cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363a0: 0xc043904  jal         func_10E410
    ctx->pc = 0x1363A0u;
    SET_GPR_U32(ctx, 31, 0x1363A8u);
    ctx->pc = 0x1363A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363A0u;
    // 0x1363a4: 0x8e240464  lw          $a0, 0x464($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E410u, 0x1363A0u, 0x1363A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363A8u;
label_1363a8:
    // 0x1363a8: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x1363a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1363ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1363acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1363b0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x1363b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1363b4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1363b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1363b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1363b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1363bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1363bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1363c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1363C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1363C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363C0u;
        // 0x1363c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1363C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1363C8u;
}
