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

// Function: sub_002BA2B0
// Address: 0x2ba2b0 - 0x2ba320
void sub_002BA2B0_0x2ba2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA2B0_0x2ba2b0");
#endif

    switch (ctx->pc) {
        case 0x2ba2d0u: goto label_2ba2d0;
        default: break;
    }

    ctx->pc = 0x2ba2b0u;

    // 0x2ba2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba2b4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2ba2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ba2b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ba2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ba2bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ba2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ba2c0: 0x58403  sra         $s0, $a1, 16
    ctx->pc = 0x2ba2c0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2ba2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ba2c8: 0xc0a21c2  jal         func_288708
    ctx->pc = 0x2BA2C8u;
    SET_GPR_U32(ctx, 31, 0x2BA2D0u);
    ctx->pc = 0x2BA2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA2C8u;
    // 0x2ba2cc: 0x30d100ff  andi        $s1, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x288708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288708u, 0x2BA2C8u, 0x2BA2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2D0u;
label_2ba2d0:
    // 0x2ba2d0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2BA2D0u;
    {
        const bool branch_taken_0x2ba2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba2d0) {
            ctx->pc = 0x2BA2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA2D0u;
            // 0x2ba2d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA310u;
            goto label_2ba310;
        }
    }
    ctx->pc = 0x2BA2D8u;
    // 0x2ba2d8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA2D8u;
    {
        const bool branch_taken_0x2ba2d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2D8u;
        // 0x2ba2dc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2d8) {
            ctx->pc = 0x2BA2F4u;
            goto label_2ba2f4;
        }
    }
    ctx->pc = 0x2BA2E0u;
    // 0x2ba2e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ba2e4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ba2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ba2e8: 0xac40ad98  sw          $zero, -0x5268($v0)
    ctx->pc = 0x2ba2e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FAD98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAD98u, _value); } while (0);
    // 0x2ba2ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA2ECu;
    {
        const bool branch_taken_0x2ba2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2ECu;
        // 0x2ba2f0: 0xa060ada0  sb          $zero, -0x5260($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294946208), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2ec) {
            ctx->pc = 0x2BA30Cu;
            goto label_2ba30c;
        }
    }
    ctx->pc = 0x2BA2F4u;
label_2ba2f4:
    // 0x2ba2f4: 0x8c62ad98  lw          $v0, -0x5268($v1)
    ctx->pc = 0x2ba2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946200)));
    // 0x2ba2f8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2ba2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ba2fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA2FCu;
    {
        const bool branch_taken_0x2ba2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2FCu;
        // 0x2ba300: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2fc) {
            ctx->pc = 0x2BA30Cu;
            goto label_2ba30c;
        }
    }
    ctx->pc = 0x2BA304u;
    // 0x2ba304: 0xac70ad98  sw          $s0, -0x5268($v1)
    ctx->pc = 0x2ba304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946200), GPR_U32(ctx, 16));
    // 0x2ba308: 0xa051ada0  sb          $s1, -0x5260($v0)
    ctx->pc = 0x2ba308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294946208), (uint8_t)GPR_U32(ctx, 17));
label_2ba30c:
    // 0x2ba30c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ba30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba310:
    // 0x2ba310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ba310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba318: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA318u;
        // 0x2ba31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA320u;
}
