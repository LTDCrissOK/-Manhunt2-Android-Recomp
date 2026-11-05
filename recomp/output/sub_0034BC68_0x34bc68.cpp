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

// Function: sub_0034BC68
// Address: 0x34bc68 - 0x34bcd0
void sub_0034BC68_0x34bc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BC68_0x34bc68");
#endif

    switch (ctx->pc) {
        case 0x34bc80u: goto label_34bc80;
        case 0x34bc88u: goto label_34bc88;
        case 0x34bca8u: goto label_34bca8;
        default: break;
    }

    ctx->pc = 0x34bc68u;

    // 0x34bc68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34bc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34bc6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34bc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34bc70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34bc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34bc74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34bc78: 0xc0d3982  jal         func_34E608
    ctx->pc = 0x34BC78u;
    SET_GPR_U32(ctx, 31, 0x34BC80u);
    ctx->pc = 0x34BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BC78u;
    // 0x34bc7c: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E608u, 0x34BC78u, 0x34BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC80u;
label_34bc80:
    // 0x34bc80: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x34bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x34bc84: 0x2450b610  addiu       $s0, $v0, -0x49F0
    ctx->pc = 0x34bc84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_34bc88:
    // 0x34bc88: 0x92020075  lbu         $v0, 0x75($s0)
    ctx->pc = 0x34bc88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
    // 0x34bc8c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34BC8Cu;
    {
        const bool branch_taken_0x34bc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bc8c) {
            ctx->pc = 0x34BC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BC8Cu;
            // 0x34bc90: 0xa2000075  sb          $zero, 0x75($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BC94u;
            goto label_34bc94;
        }
    }
    ctx->pc = 0x34BC94u;
label_34bc94:
    // 0x34bc94: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x34bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x34bc98: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34BC98u;
    {
        const bool branch_taken_0x34bc98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC98u;
        // 0x34bc9c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc98) {
            ctx->pc = 0x34BCACu;
            goto label_34bcac;
        }
    }
    ctx->pc = 0x34BCA0u;
    // 0x34bca0: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x34BCA0u;
    SET_GPR_U32(ctx, 31, 0x34BCA8u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x34BCA0u, 0x34BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BCA8u;
label_34bca8:
    // 0x34bca8: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x34bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_34bcac:
    // 0x34bcac: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x34BCACu;
    {
        const bool branch_taken_0x34bcac = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x34BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BCACu;
        // 0x34bcb0: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bcac) {
            ctx->pc = 0x34BC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bc88;
        }
    }
    ctx->pc = 0x34BCB4u;
    // 0x34bcb4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34bcb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34bcb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bcbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34bcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34bcc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34bcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bcc4: 0xac402ce0  sw          $zero, 0x2CE0($v0)
    ctx->pc = 0x34bcc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CE0u, _value); } while (0);
    // 0x34bcc8: 0x3e00008  jr          $ra
    ctx->pc = 0x34BCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BCC8u;
        // 0x34bccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BCD0u;
}
