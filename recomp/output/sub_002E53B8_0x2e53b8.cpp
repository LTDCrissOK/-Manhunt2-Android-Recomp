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

// Function: sub_002E53B8
// Address: 0x2e53b8 - 0x2e5430
void sub_002E53B8_0x2e53b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E53B8_0x2e53b8");
#endif

    switch (ctx->pc) {
        case 0x2e53f0u: goto label_2e53f0;
        case 0x2e53f8u: goto label_2e53f8;
        default: break;
    }

    ctx->pc = 0x2e53b8u;

    // 0x2e53b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e53b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e53bc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2e53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2e53c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e53c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e53c4: 0x24444dc0  addiu       $a0, $v0, 0x4DC0
    ctx->pc = 0x2e53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19904));
    // 0x2e53c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e53c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e53cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e53ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2e53d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x594DC4u));
    // 0x2e53d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E53D4u;
    {
        const bool branch_taken_0x2e53d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53D4u;
        // 0x2e53d8: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53d4) {
            ctx->pc = 0x2E53E0u;
            goto label_2e53e0;
        }
    }
    ctx->pc = 0x2E53DCu;
    // 0x2e53dc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2e53dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e53e0:
    // 0x2e53e0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E53E0u;
    {
        const bool branch_taken_0x2e53e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53E0u;
        // 0x2e53e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53e0) {
            ctx->pc = 0x2E5410u;
            goto label_2e5410;
        }
    }
    ctx->pc = 0x2E53E8u;
    // 0x2e53e8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2e53e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e53ec: 0x0  nop
    ctx->pc = 0x2e53ecu;
    // NOP
label_2e53f0:
    // 0x2e53f0: 0xc0fb850  jal         func_3EE140
    ctx->pc = 0x2E53F0u;
    SET_GPR_U32(ctx, 31, 0x2E53F8u);
    ctx->pc = 0x2E53F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E53F0u;
    // 0x2e53f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE140u, 0x2E53F0u, 0x2E53F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E53F8u;
label_2e53f8:
    // 0x2e53f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e53fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E53FCu;
    {
        const bool branch_taken_0x2e53fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53FCu;
        // 0x2e5400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53fc) {
            ctx->pc = 0x2E5408u;
            goto label_2e5408;
        }
    }
    ctx->pc = 0x2E5404u;
    // 0x2e5404: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e5404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e5408:
    // 0x2e5408: 0x54a0fff9  bnel        $a1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E5408u;
    {
        const bool branch_taken_0x2e5408 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5408) {
            ctx->pc = 0x2E540Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5408u;
            // 0x2e540c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E53F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e53f0;
        }
    }
    ctx->pc = 0x2E5410u;
label_2e5410:
    // 0x2e5410: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e5410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e5414: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e5414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e5418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e541c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e541cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e5420: 0xac402c1c  sw          $zero, 0x2C1C($v0)
    ctx->pc = 0x2e5420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C1Cu, _value); } while (0);
    // 0x2e5424: 0xa060b821  sb          $zero, -0x47DF($v1)
    ctx->pc = 0x2e5424u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FB821u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FB821u, _value); } while (0);
    // 0x2e5428: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5428u;
        // 0x2e542c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5430u;
}
