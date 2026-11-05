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

// Function: sub_003341D0
// Address: 0x3341d0 - 0x334268
void sub_003341D0_0x3341d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003341D0_0x3341d0");
#endif

    switch (ctx->pc) {
        case 0x3341f8u: goto label_3341f8;
        case 0x334214u: goto label_334214;
        case 0x334220u: goto label_334220;
        default: break;
    }

    ctx->pc = 0x3341d0u;

    // 0x3341d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3341d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3341d4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3341d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x3341d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3341d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3341dc: 0x24446e70  addiu       $a0, $v0, 0x6E70
    ctx->pc = 0x3341dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x3341e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3341e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3341e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3341e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3341e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3341e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B6E74u));
    // 0x3341ec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3341ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5B6E7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6E7Cu, _value); } while (0);
    // 0x3341f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3341F0u;
    {
        const bool branch_taken_0x3341f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3341F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341F0u;
        // 0x3341f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3341f0) {
            ctx->pc = 0x334234u;
            goto label_334234;
        }
    }
    ctx->pc = 0x3341F8u;
label_3341f8:
    // 0x3341f8: 0x8c43bedc  lw          $v1, -0x4124($v0)
    ctx->pc = 0x3341f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950620)));
    // 0x3341fc: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3341FCu;
    {
        const bool branch_taken_0x3341fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x334200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341FCu;
        // 0x334200: 0x96236e70  lhu         $v1, 0x6E70($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3341fc) {
            ctx->pc = 0x334228u;
            goto label_334228;
        }
    }
    ctx->pc = 0x334204u;
    // 0x334204: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x334204u;
    {
        const bool branch_taken_0x334204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x334204) {
            ctx->pc = 0x334208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334204u;
            // 0x334208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334218u;
            goto label_334218;
        }
    }
    ctx->pc = 0x33420Cu;
    // 0x33420c: 0xc0c9c1c  jal         func_327070
    ctx->pc = 0x33420Cu;
    SET_GPR_U32(ctx, 31, 0x334214u);
    ctx->pc = 0x334210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33420Cu;
    // 0x334210: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327070u, 0x33420Cu, 0x334214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334214u;
label_334214:
    // 0x334214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_334218:
    // 0x334218: 0xc0fba46  jal         func_3EE918
    ctx->pc = 0x334218u;
    SET_GPR_U32(ctx, 31, 0x334220u);
    ctx->pc = 0x33421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334218u;
    // 0x33421c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE918u, 0x334218u, 0x334220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334220u;
label_334220:
    // 0x334220: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x334220u;
    {
        const bool branch_taken_0x334220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334220u;
        // 0x334224: 0x26306e70  addiu       $s0, $s1, 0x6E70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334220) {
            ctx->pc = 0x334238u;
            goto label_334238;
        }
    }
    ctx->pc = 0x334228u;
label_334228:
    // 0x334228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33422c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33422Cu;
    {
        const bool branch_taken_0x33422c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x334230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33422Cu;
        // 0x334230: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33422c) {
            ctx->pc = 0x334254u;
            goto label_334254;
        }
    }
    ctx->pc = 0x334234u;
label_334234:
    // 0x334234: 0x26306e70  addiu       $s0, $s1, 0x6E70
    ctx->pc = 0x334234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28272));
label_334238:
    // 0x334238: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x334238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33423c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33423Cu;
    {
        const bool branch_taken_0x33423c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33423Cu;
        // 0x334240: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33423c) {
            ctx->pc = 0x334248u;
            goto label_334248;
        }
    }
    ctx->pc = 0x334244u;
    // 0x334244: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x334244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_334248:
    // 0x334248: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x334248u;
    {
        const bool branch_taken_0x334248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334248u;
        // 0x33424c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334248) {
            ctx->pc = 0x3341F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3341f8;
        }
    }
    ctx->pc = 0x334250u;
    // 0x334250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334254:
    // 0x334254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x334258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33425c: 0x3e00008  jr          $ra
    ctx->pc = 0x33425Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33425Cu;
        // 0x334260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33425Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334264u;
    // 0x334264: 0x0  nop
    ctx->pc = 0x334264u;
    // NOP
    ctx->pc = 0x334268u;
}
