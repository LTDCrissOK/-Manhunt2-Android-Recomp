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

// Function: sub_002BA388
// Address: 0x2ba388 - 0x2ba3e8
void sub_002BA388_0x2ba388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA388_0x2ba388");
#endif

    switch (ctx->pc) {
        case 0x2ba3dcu: goto label_2ba3dc;
        default: break;
    }

    ctx->pc = 0x2ba388u;

    // 0x2ba388: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ba38c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ba38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ba390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ba394: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ba394u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ba398: 0xac60ad9c  sw          $zero, -0x5264($v1)
    ctx->pc = 0x2ba398u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FAD9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAD9Cu, _value); } while (0);
    // 0x2ba39c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2ba39cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ba3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ba3a4: 0xac40ad98  sw          $zero, -0x5268($v0)
    ctx->pc = 0x2ba3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946200), GPR_U32(ctx, 0));
    // 0x2ba3a8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2ba3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ba3ac: 0xa0c0ada0  sb          $zero, -0x5260($a2)
    ctx->pc = 0x2ba3acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294946208), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ba3b0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x2ba3b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ba3b4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA3B4u;
    {
        const bool branch_taken_0x2ba3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3B4u;
        // 0x2ba3b8: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3b4) {
            ctx->pc = 0x2BA3DCu;
            goto label_2ba3dc;
        }
    }
    ctx->pc = 0x2BA3BCu;
    // 0x2ba3bc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2ba3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2ba3c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba3c4: 0x24434e80  addiu       $v1, $v0, 0x4E80
    ctx->pc = 0x2ba3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20096));
    // 0x2ba3c8: 0xa0404e80  sb          $zero, 0x4E80($v0)
    ctx->pc = 0x2ba3c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x574E80u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x574E80u, _value); } while (0);
    // 0x2ba3cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2ba3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba3d0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2ba3d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x574E81u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x574E81u, _value); } while (0);
    // 0x2ba3d4: 0xc0ee740  jal         func_3B9D00
    ctx->pc = 0x2BA3D4u;
    SET_GPR_U32(ctx, 31, 0x2BA3DCu);
    ctx->pc = 0x2BA3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA3D4u;
    // 0x2ba3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9D00u, 0x2BA3D4u, 0x2BA3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3DCu;
label_2ba3dc:
    // 0x2ba3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E0u;
        // 0x2ba3e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA3E8u;
}
