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

// Function: sub_002B8178
// Address: 0x2b8178 - 0x2b8278
void sub_002B8178_0x2b8178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8178_0x2b8178");
#endif

    switch (ctx->pc) {
        case 0x2b81a4u: goto label_2b81a4;
        case 0x2b81ccu: goto label_2b81cc;
        case 0x2b8224u: goto label_2b8224;
        case 0x2b822cu: goto label_2b822c;
        case 0x2b8234u: goto label_2b8234;
        case 0x2b824cu: goto label_2b824c;
        default: break;
    }

    ctx->pc = 0x2b8178u;

    // 0x2b8178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b817c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8180: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b8180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b8184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b8188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b818c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b818cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8190: 0x8e025910  lw          $v0, 0x5910($s0)
    ctx->pc = 0x2b8190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22800)));
    // 0x2b8194: 0x1451000b  bne         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B8194u;
    {
        const bool branch_taken_0x2b8194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b8194) {
            ctx->pc = 0x2B81C4u;
            goto label_2b81c4;
        }
    }
    ctx->pc = 0x2B819Cu;
    // 0x2b819c: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B819Cu;
    SET_GPR_U32(ctx, 31, 0x2B81A4u);
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B819Cu, 0x2B81A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81A4u;
label_2b81a4:
    // 0x2b81a4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b81a8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b81ac: 0xa040a930  sb          $zero, -0x56D0($v0)
    ctx->pc = 0x2b81acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA930u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA930u, _value); } while (0);
    // 0x2b81b0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2b81b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b81b4: 0xa060a928  sb          $zero, -0x56D8($v1)
    ctx->pc = 0x2b81b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b81b8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b81bc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2B81BCu;
    {
        const bool branch_taken_0x2b81bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81BCu;
        // 0x2b81c0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81bc) {
            ctx->pc = 0x2B8260u;
            goto label_2b8260;
        }
    }
    ctx->pc = 0x2B81C4u;
label_2b81c4:
    // 0x2b81c4: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B81C4u;
    SET_GPR_U32(ctx, 31, 0x2B81CCu);
    ctx->pc = 0x2B81C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B81C4u;
    // 0x2b81c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B81C4u, 0x2B81CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81CCu;
label_2b81cc:
    // 0x2b81cc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2b81ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b81d0: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B81D0u;
    {
        const bool branch_taken_0x2b81d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81D0u;
        // 0x2b81d4: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81d0) {
            ctx->pc = 0x2B8258u;
            goto label_2b8258;
        }
    }
    ctx->pc = 0x2B81D8u;
    // 0x2b81d8: 0x8e0358f8  lw          $v1, 0x58F8($s0)
    ctx->pc = 0x2b81d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b81dc: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x2b81dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2b81e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B81E0u;
    {
        const bool branch_taken_0x2b81e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81E0u;
        // 0x2b81e4: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81e0) {
            ctx->pc = 0x2B8200u;
            goto label_2b8200;
        }
    }
    ctx->pc = 0x2B81E8u;
    // 0x2b81e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B81E8u;
    {
        const bool branch_taken_0x2b81e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81E8u;
        // 0x2b81ec: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81e8) {
            ctx->pc = 0x2B8218u;
            goto label_2b8218;
        }
    }
    ctx->pc = 0x2B81F0u;
    // 0x2b81f0: 0x10710006  beq         $v1, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B81F0u;
    {
        const bool branch_taken_0x2b81f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81F0u;
        // 0x2b81f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81f0) {
            ctx->pc = 0x2B820Cu;
            goto label_2b820c;
        }
    }
    ctx->pc = 0x2B81F8u;
    // 0x2b81f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B81F8u;
    {
        const bool branch_taken_0x2b81f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81F8u;
        // 0x2b81fc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81f8) {
            ctx->pc = 0x2B8244u;
            goto label_2b8244;
        }
    }
    ctx->pc = 0x2B8200u;
label_2b8200:
    // 0x2b8200: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b8200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b8204: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B8204u;
    {
        const bool branch_taken_0x2b8204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8204u;
        // 0x2b8208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8204) {
            ctx->pc = 0x2B8240u;
            goto label_2b8240;
        }
    }
    ctx->pc = 0x2B820Cu;
label_2b820c:
    // 0x2b820c: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2b820cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b8210: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B8210u;
    {
        const bool branch_taken_0x2b8210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8210u;
        // 0x2b8214: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8210) {
            ctx->pc = 0x2B825Cu;
            goto label_2b825c;
        }
    }
    ctx->pc = 0x2B8218u;
label_2b8218:
    // 0x2b8218: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b8218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b821c: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B821Cu;
    SET_GPR_U32(ctx, 31, 0x2B8224u);
    ctx->pc = 0x2B8220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B821Cu;
    // 0x2b8220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B821Cu, 0x2B8224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8224u;
label_2b8224:
    // 0x2b8224: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B8224u;
    SET_GPR_U32(ctx, 31, 0x2B822Cu);
    ctx->pc = 0x2B8228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8224u;
    // 0x2b8228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B8224u, 0x2B822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B822Cu;
label_2b822c:
    // 0x2b822c: 0xc0ad336  jal         func_2B4CD8
    ctx->pc = 0x2B822Cu;
    SET_GPR_U32(ctx, 31, 0x2B8234u);
    ctx->pc = 0x2B8230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B822Cu;
    // 0x2b8230: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B822Cu, 0x2B8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8234u;
label_2b8234:
    // 0x2b8234: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2b8234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b8238: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8238u;
    {
        const bool branch_taken_0x2b8238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8238u;
        // 0x2b823c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8238) {
            ctx->pc = 0x2B825Cu;
            goto label_2b825c;
        }
    }
    ctx->pc = 0x2B8240u;
label_2b8240:
    // 0x2b8240: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2b8240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b8244:
    // 0x2b8244: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B8244u;
    SET_GPR_U32(ctx, 31, 0x2B824Cu);
    ctx->pc = 0x2B8248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8244u;
    // 0x2b8248: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B8244u, 0x2B824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B824Cu;
label_2b824c:
    // 0x2b824c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2b824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b8250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8250u;
    {
        const bool branch_taken_0x2b8250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8250u;
        // 0x2b8254: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8250) {
            ctx->pc = 0x2B825Cu;
            goto label_2b825c;
        }
    }
    ctx->pc = 0x2B8258u;
label_2b8258:
    // 0x2b8258: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b8258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b825c:
    // 0x2b825c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b825cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b8260:
    // 0x2b8260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b8264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b8268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b826c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B826Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B826Cu;
        // 0x2b8270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B826Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8274u;
    // 0x2b8274: 0x0  nop
    ctx->pc = 0x2b8274u;
    // NOP
    ctx->pc = 0x2b8278u;
}
