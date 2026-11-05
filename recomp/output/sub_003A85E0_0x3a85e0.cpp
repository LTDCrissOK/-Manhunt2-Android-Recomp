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

// Function: sub_003A85E0
// Address: 0x3a85e0 - 0x3a86b8
void sub_003A85E0_0x3a85e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A85E0_0x3a85e0");
#endif

    switch (ctx->pc) {
        case 0x3a85f8u: goto label_3a85f8;
        default: break;
    }

    ctx->pc = 0x3a85e0u;

    // 0x3a85e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a85e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a85e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a85e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a85e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a85e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a85ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a85ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a85f0: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x3A85F0u;
    ctx->pc = 0x3A85F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A85F0u;
    // 0x3a85f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A85F8u;
label_3a85f8:
    // 0x3a85f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a85f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a85fc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3a85fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a8600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a8604: 0x5410008  bgez        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8604u;
    {
        const bool branch_taken_0x3a8604 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x3A8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8604u;
        // 0x3a8608: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8604) {
            ctx->pc = 0x3A8628u;
            goto label_3a8628;
        }
    }
    ctx->pc = 0x3A860Cu;
    // 0x3a860c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a860cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a8610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a8610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8614: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a8614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8618: 0x2484e808  addiu       $a0, $a0, -0x17F8
    ctx->pc = 0x3a8618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961160));
    // 0x3a861c: 0x80e5ebe  j           func_397AF8
    ctx->pc = 0x3A861Cu;
    ctx->pc = 0x3A8620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A861Cu;
    // 0x3a8620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    sub_00397AF8_0x397af8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A8624u;
    // 0x3a8624: 0x0  nop
    ctx->pc = 0x3a8624u;
    // NOP
label_3a8628:
    // 0x3a8628: 0x5610007  bgez        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A8628u;
    {
        const bool branch_taken_0x3a8628 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x3A862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8628u;
        // 0x3a862c: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8628) {
            ctx->pc = 0x3A8648u;
            goto label_3a8648;
        }
    }
    ctx->pc = 0x3A8630u;
    // 0x3a8630: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a8630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a8634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a8634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8638: 0x2484e838  addiu       $a0, $a0, -0x17C8
    ctx->pc = 0x3a8638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961208));
    // 0x3a863c: 0x80e5ebe  j           func_397AF8
    ctx->pc = 0x3A863Cu;
    ctx->pc = 0x3A8640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A863Cu;
    // 0x3a8640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    sub_00397AF8_0x397af8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A8644u;
    // 0x3a8644: 0x0  nop
    ctx->pc = 0x3a8644u;
    // NOP
label_3a8648:
    // 0x3a8648: 0x4b4821  addu        $t1, $v0, $t3
    ctx->pc = 0x3a8648u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3a864c: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x3a864cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x3a8650: 0x29220021  slti        $v0, $t1, 0x21
    ctx->pc = 0x3a8650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x3a8654: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8654u;
    {
        const bool branch_taken_0x3a8654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8654u;
        // 0x3a8658: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8654) {
            ctx->pc = 0x3A8678u;
            goto label_3a8678;
        }
    }
    ctx->pc = 0x3A865Cu;
    // 0x3a865c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a865cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a8660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a8660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8664: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3a8664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a8668: 0x2484e868  addiu       $a0, $a0, -0x1798
    ctx->pc = 0x3a8668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961256));
    // 0x3a866c: 0x80e5ebe  j           func_397AF8
    ctx->pc = 0x3A866Cu;
    ctx->pc = 0x3A8670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A866Cu;
    // 0x3a8670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    sub_00397AF8_0x397af8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A8674u;
    // 0x3a8674: 0x0  nop
    ctx->pc = 0x3a8674u;
    // NOP
label_3a8678:
    // 0x3a8678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a8678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a867c: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x3a867cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3a8680: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x3a8680u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x3a8684: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3a8684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3a8688: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a8688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3a868c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x3a868cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x3a8690: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x3a8690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x3a8694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a8694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8698: 0xac6aa0f0  sw          $t2, -0x5F10($v1)
    ctx->pc = 0x3a8698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x41A0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41A0F0u, _value); } while (0);
    // 0x3a869c: 0xac8ba0f4  sw          $t3, -0x5F0C($a0)
    ctx->pc = 0x3a869cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x41A0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41A0F4u, _value); } while (0);
    // 0x3a86a0: 0xaca7a0cc  sw          $a3, -0x5F34($a1)
    ctx->pc = 0x3a86a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x41A0CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41A0CCu, _value); } while (0);
    // 0x3a86a4: 0xacc2a0d0  sw          $v0, -0x5F30($a2)
    ctx->pc = 0x3a86a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x41A0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41A0D0u, _value); } while (0);
    // 0x3a86a8: 0xad09a0c8  sw          $t1, -0x5F38($t0)
    ctx->pc = 0x3a86a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x41A0C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41A0C8u, _value); } while (0);
    // 0x3a86ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3A86ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86ACu;
        // 0x3a86b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A86ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A86B4u;
    // 0x3a86b4: 0x0  nop
    ctx->pc = 0x3a86b4u;
    // NOP
    ctx->pc = 0x3a86b8u;
}
