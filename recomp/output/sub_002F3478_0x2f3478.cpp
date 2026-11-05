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

// Function: sub_002F3478
// Address: 0x2f3478 - 0x2f34d8
void sub_002F3478_0x2f3478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3478_0x2f3478");
#endif

    switch (ctx->pc) {
        case 0x2f348cu: goto label_2f348c;
        case 0x2f34a4u: goto label_2f34a4;
        default: break;
    }

    ctx->pc = 0x2f3478u;

    // 0x2f3478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f3478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f347c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f3480: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f3480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f3484: 0xc08dada  jal         func_236B68
    ctx->pc = 0x2F3484u;
    SET_GPR_U32(ctx, 31, 0x2F348Cu);
    ctx->pc = 0x2F3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3484u;
    // 0x2f3488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x2F3484u, 0x2F348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F348Cu;
label_2f348c:
    // 0x2f348c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F348Cu;
    {
        const bool branch_taken_0x2f348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F348Cu;
        // 0x2f3490: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f348c) {
            ctx->pc = 0x2F349Cu;
            goto label_2f349c;
        }
    }
    ctx->pc = 0x2F3494u;
    // 0x2f3494: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2F3494u;
    {
        const bool branch_taken_0x2f3494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3494u;
        // 0x2f3498: 0xc440b7ec  lwc1        $f0, -0x4814($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3494) {
            ctx->pc = 0x2F34C8u;
            goto label_2f34c8;
        }
    }
    ctx->pc = 0x2F349Cu;
label_2f349c:
    // 0x2f349c: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x2F349Cu;
    SET_GPR_U32(ctx, 31, 0x2F34A4u);
    ctx->pc = 0x2F34A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F349Cu;
    // 0x2f34a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F349Cu, 0x2F34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34A4u;
label_2f34a4:
    // 0x2f34a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F34A4u;
    {
        const bool branch_taken_0x2f34a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F34A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34A4u;
        // 0x2f34a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34a4) {
            ctx->pc = 0x2F34C4u;
            goto label_2f34c4;
        }
    }
    ctx->pc = 0x2F34ACu;
    // 0x2f34ac: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2f34acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x2f34b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f34b4: 0xc441b7e0  lwc1        $f1, -0x4820($v0)
    ctx->pc = 0x2f34b4u;
    { uint32_t bits = FAST_READ32(0x3FB7E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f34b8: 0xc4605b34  lwc1        $f0, 0x5B34($v1)
    ctx->pc = 0x2f34b8u;
    { uint32_t bits = FAST_READ32(0x595B34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f34bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F34BCu;
    {
        const bool branch_taken_0x2f34bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34BCu;
        // 0x2f34c0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34bc) {
            ctx->pc = 0x2F34C8u;
            goto label_2f34c8;
        }
    }
    ctx->pc = 0x2F34C4u;
label_2f34c4:
    // 0x2f34c4: 0xc440b7e8  lwc1        $f0, -0x4818($v0)
    ctx->pc = 0x2f34c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f34c8:
    // 0x2f34c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f34c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f34cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f34ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f34d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F34D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34D0u;
        // 0x2f34d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F34D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F34D8u;
}
