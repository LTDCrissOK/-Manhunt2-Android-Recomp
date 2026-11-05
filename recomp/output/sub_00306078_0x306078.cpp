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

// Function: sub_00306078
// Address: 0x306078 - 0x3060e0
void sub_00306078_0x306078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306078_0x306078");
#endif

    switch (ctx->pc) {
        case 0x30608cu: goto label_30608c;
        case 0x3060bcu: goto label_3060bc;
        case 0x3060ccu: goto label_3060cc;
        default: break;
    }

    ctx->pc = 0x306078u;

    // 0x306078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30607c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x306080: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x306080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x306084: 0xc090868  jal         func_2421A0
    ctx->pc = 0x306084u;
    SET_GPR_U32(ctx, 31, 0x30608Cu);
    ctx->pc = 0x306088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306084u;
    // 0x306088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421A0u, 0x306084u, 0x30608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30608Cu;
label_30608c:
    // 0x30608c: 0xc6000378  lwc1        $f0, 0x378($s0)
    ctx->pc = 0x30608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x306090: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x306090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x306094: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x306094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x306098: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x306098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x30609c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30609cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3060a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3060a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3060a4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3060a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3060a8: 0x0  nop
    ctx->pc = 0x3060a8u;
    // NOP
    // 0x3060ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3060ACu;
    {
        const bool branch_taken_0x3060ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3060ac) {
            ctx->pc = 0x3060BCu;
            goto label_3060bc;
        }
    }
    ctx->pc = 0x3060B4u;
    // 0x3060b4: 0xc0c56f4  jal         func_315BD0
    ctx->pc = 0x3060B4u;
    SET_GPR_U32(ctx, 31, 0x3060BCu);
    ctx->pc = 0x3060B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060B4u;
    // 0x3060b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315BD0u, 0x3060B4u, 0x3060BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060BCu;
label_3060bc:
    // 0x3060bc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3060bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x3060c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3060c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3060c4: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x3060C4u;
    SET_GPR_U32(ctx, 31, 0x3060CCu);
    ctx->pc = 0x3060C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060C4u;
    // 0x3060c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x3060C4u, 0x3060CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060CCu;
label_3060cc:
    // 0x3060cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3060ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3060d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3060d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3060d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3060D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3060D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060D4u;
        // 0x3060d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3060D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3060DCu;
    // 0x3060dc: 0x0  nop
    ctx->pc = 0x3060dcu;
    // NOP
    ctx->pc = 0x3060e0u;
}
