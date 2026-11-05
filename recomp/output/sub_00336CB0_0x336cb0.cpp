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

// Function: sub_00336CB0
// Address: 0x336cb0 - 0x336d10
void sub_00336CB0_0x336cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336CB0_0x336cb0");
#endif

    switch (ctx->pc) {
        case 0x336cd8u: goto label_336cd8;
        default: break;
    }

    ctx->pc = 0x336cb0u;

    // 0x336cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336cb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x336cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x336cb8: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x336CB8u;
    {
        const bool branch_taken_0x336cb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x336CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CB8u;
        // 0x336cbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336cb8) {
            ctx->pc = 0x336D00u;
            goto label_336d00;
        }
    }
    ctx->pc = 0x336CC0u;
    // 0x336cc0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x336CC0u;
    {
        const bool branch_taken_0x336cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x336CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CC0u;
        // 0x336cc4: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336cc0) {
            ctx->pc = 0x336D00u;
            goto label_336d00;
        }
    }
    ctx->pc = 0x336CC8u;
    // 0x336cc8: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x336cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x336ccc: 0x24846e80  addiu       $a0, $a0, 0x6E80
    ctx->pc = 0x336cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28288));
    // 0x336cd0: 0xc0b2aaa  jal         func_2CAAA8
    ctx->pc = 0x336CD0u;
    SET_GPR_U32(ctx, 31, 0x336CD8u);
    ctx->pc = 0x336CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336CD0u;
    // 0x336cd4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAAA8u, 0x336CD0u, 0x336CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336CD8u;
label_336cd8:
    // 0x336cd8: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x336cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x336cdc: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x336cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x336ce0: 0xa4606ea0  sh          $zero, 0x6EA0($v1)
    ctx->pc = 0x336ce0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B6EA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5B6EA0u, _value); } while (0);
    // 0x336ce4: 0x24646ea0  addiu       $a0, $v1, 0x6EA0
    ctx->pc = 0x336ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28320));
    // 0x336ce8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x336ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B6EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6EACu, _value); } while (0);
    // 0x336cec: 0x24456eb0  addiu       $a1, $v0, 0x6EB0
    ctx->pc = 0x336cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28336));
    // 0x336cf0: 0xa4406eb0  sh          $zero, 0x6EB0($v0)
    ctx->pc = 0x336cf0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B6EB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5B6EB0u, _value); } while (0);
    // 0x336cf4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x336cf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B6EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6EBCu, _value); } while (0);
    // 0x336cf8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x336cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B6EA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6EA4u, _value); } while (0);
    // 0x336cfc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x336cfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B6EB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6EB4u, _value); } while (0);
label_336d00:
    // 0x336d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336d04: 0x3e00008  jr          $ra
    ctx->pc = 0x336D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D04u;
        // 0x336d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336D0Cu;
    // 0x336d0c: 0x0  nop
    ctx->pc = 0x336d0cu;
    // NOP
    ctx->pc = 0x336d10u;
}
