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

// Function: sub_002ED480
// Address: 0x2ed480 - 0x2ed4e8
void sub_002ED480_0x2ed480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED480_0x2ed480");
#endif

    switch (ctx->pc) {
        case 0x2ed4acu: goto label_2ed4ac;
        case 0x2ed4bcu: goto label_2ed4bc;
        default: break;
    }

    ctx->pc = 0x2ed480u;

    // 0x2ed480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed484: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2ed484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2ed488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed48c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ed48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ed490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed494: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ed494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ed498: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ed498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ed49c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED49Cu;
    {
        const bool branch_taken_0x2ed49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed49c) {
            ctx->pc = 0x2ED4B4u;
            goto label_2ed4b4;
        }
    }
    ctx->pc = 0x2ED4A4u;
    // 0x2ed4a4: 0xc0a21b0  jal         func_2886C0
    ctx->pc = 0x2ED4A4u;
    SET_GPR_U32(ctx, 31, 0x2ED4ACu);
    ctx->pc = 0x2886C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2886C0u, 0x2ED4A4u, 0x2ED4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED4ACu;
label_2ed4ac:
    // 0x2ed4ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED4ACu;
    {
        const bool branch_taken_0x2ed4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED4ACu;
        // 0x2ed4b0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4ac) {
            ctx->pc = 0x2ED4C0u;
            goto label_2ed4c0;
        }
    }
    ctx->pc = 0x2ED4B4u;
label_2ed4b4:
    // 0x2ed4b4: 0xc0a21b6  jal         func_2886D8
    ctx->pc = 0x2ED4B4u;
    SET_GPR_U32(ctx, 31, 0x2ED4BCu);
    ctx->pc = 0x2886D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2886D8u, 0x2ED4B4u, 0x2ED4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED4BCu;
label_2ed4bc:
    // 0x2ed4bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ed4bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ed4c0:
    // 0x2ed4c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED4C0u;
    {
        const bool branch_taken_0x2ed4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed4c0) {
            ctx->pc = 0x2ED4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED4C0u;
            // 0x2ed4c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED4D8u;
            goto label_2ed4d8;
        }
    }
    ctx->pc = 0x2ED4C8u;
    // 0x2ed4c8: 0xc6000510  lwc1        $f0, 0x510($s0)
    ctx->pc = 0x2ed4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed4cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ed4ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ed4d0: 0xe6000510  swc1        $f0, 0x510($s0)
    ctx->pc = 0x2ed4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1296), bits); }
    // 0x2ed4d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed4d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed4d8:
    // 0x2ed4d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ed4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED4DCu;
        // 0x2ed4e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED4E4u;
    // 0x2ed4e4: 0x0  nop
    ctx->pc = 0x2ed4e4u;
    // NOP
    ctx->pc = 0x2ed4e8u;
}
