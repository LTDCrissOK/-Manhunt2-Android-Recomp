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

// Function: sub_002B86D0
// Address: 0x2b86d0 - 0x2b8790
void sub_002B86D0_0x2b86d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B86D0_0x2b86d0");
#endif

    switch (ctx->pc) {
        case 0x2b86f0u: goto label_2b86f0;
        case 0x2b86f8u: goto label_2b86f8;
        case 0x2b8740u: goto label_2b8740;
        case 0x2b8760u: goto label_2b8760;
        case 0x2b8768u: goto label_2b8768;
        case 0x2b8770u: goto label_2b8770;
        default: break;
    }

    ctx->pc = 0x2b86d0u;

    // 0x2b86d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b86d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b86d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b86d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b86d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b86d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b86dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b86dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b86e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b86e4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b86e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b86e8: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B86E8u;
    SET_GPR_U32(ctx, 31, 0x2B86F0u);
    ctx->pc = 0x2B86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B86E8u;
    // 0x2b86ec: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B86E8u, 0x2B86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B86F0u;
label_2b86f0:
    // 0x2b86f0: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B86F0u;
    SET_GPR_U32(ctx, 31, 0x2B86F8u);
    ctx->pc = 0x2B86F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B86F0u;
    // 0x2b86f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B86F0u, 0x2B86F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B86F8u;
label_2b86f8:
    // 0x2b86f8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b86fc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2b86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2b8700: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b8700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b8704: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B8704u;
    {
        const bool branch_taken_0x2b8704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8704u;
        // 0x2b8708: 0x8c632b38  lw          $v1, 0x2B38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8704) {
            ctx->pc = 0x2B872Cu;
            goto label_2b872c;
        }
    }
    ctx->pc = 0x2B870Cu;
    // 0x2b870c: 0xae115910  sw          $s1, 0x5910($s0)
    ctx->pc = 0x2b870cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 17));
    // 0x2b8710: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b8710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b8714: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b8714u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b8718: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b8718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b871c: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b871cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b8720: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b8720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8724: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B8724u;
    {
        const bool branch_taken_0x2b8724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8724u;
        // 0x2b8728: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8724) {
            ctx->pc = 0x2B877Cu;
            goto label_2b877c;
        }
    }
    ctx->pc = 0x2B872Cu;
label_2b872c:
    // 0x2b872c: 0x14710007  bne         $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B872Cu;
    {
        const bool branch_taken_0x2b872c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B872Cu;
        // 0x2b8730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b872c) {
            ctx->pc = 0x2B874Cu;
            goto label_2b874c;
        }
    }
    ctx->pc = 0x2B8734u;
    // 0x2b8734: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2b8734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2b8738: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B8738u;
    SET_GPR_U32(ctx, 31, 0x2B8740u);
    ctx->pc = 0x2B873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8738u;
    // 0x2b873c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B8738u, 0x2B8740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8740u;
label_2b8740:
    // 0x2b8740: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2b8740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b8744: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B8744u;
    {
        const bool branch_taken_0x2b8744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8744u;
        // 0x2b8748: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8744) {
            ctx->pc = 0x2B8778u;
            goto label_2b8778;
        }
    }
    ctx->pc = 0x2B874Cu;
label_2b874c:
    // 0x2b874c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B874Cu;
    {
        const bool branch_taken_0x2b874c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B874Cu;
        // 0x2b8750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b874c) {
            ctx->pc = 0x2B877Cu;
            goto label_2b877c;
        }
    }
    ctx->pc = 0x2B8754u;
    // 0x2b8754: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b8754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b8758: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B8758u;
    SET_GPR_U32(ctx, 31, 0x2B8760u);
    ctx->pc = 0x2B875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8758u;
    // 0x2b875c: 0xa040a928  sb          $zero, -0x56D8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945064), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B8758u, 0x2B8760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8760u;
label_2b8760:
    // 0x2b8760: 0xc0a7142  jal         func_29C508
    ctx->pc = 0x2B8760u;
    SET_GPR_U32(ctx, 31, 0x2B8768u);
    ctx->pc = 0x2B8764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8760u;
    // 0x2b8764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x2B8760u, 0x2B8768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8768u;
label_2b8768:
    // 0x2b8768: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B8768u;
    SET_GPR_U32(ctx, 31, 0x2B8770u);
    ctx->pc = 0x2B876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8768u;
    // 0x2b876c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B8768u, 0x2B8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8770u;
label_2b8770:
    // 0x2b8770: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x2b8770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2b8774: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2b8774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_2b8778:
    // 0x2b8778: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b8778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b877c:
    // 0x2b877c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b877cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b8780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b8784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8788: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8788u;
        // 0x2b878c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8790u;
}
