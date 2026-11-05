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

// Function: entry_002b64d4
// Address: 0x2b64d4 - 0x2b6588
void entry_002b64d4_0x2b64d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b64d4_0x2b64d4");
#endif

    switch (ctx->pc) {
        case 0x2b6528u: goto label_2b6528;
        case 0x2b6558u: goto label_2b6558;
        default: break;
    }

    ctx->pc = 0x2b64d4u;

    // 0x2b64d4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2b64d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2b64d8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b64d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b64dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B64DCu;
    {
        const bool branch_taken_0x2b64dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64DCu;
        // 0x2b64e0: 0x8c632b38  lw          $v1, 0x2B38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64dc) {
            ctx->pc = 0x2B6504u;
            goto label_2b6504;
        }
    }
    ctx->pc = 0x2B64E4u;
    // 0x2b64e4: 0xae115910  sw          $s1, 0x5910($s0)
    ctx->pc = 0x2b64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 17));
    // 0x2b64e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b64ec: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b64ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b64f0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b64f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b64f4: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b64f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b64f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b64fc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B64FCu;
    {
        const bool branch_taken_0x2b64fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64FCu;
        // 0x2b6500: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64fc) {
            ctx->pc = 0x2B6570u;
            goto label_2b6570;
        }
    }
    ctx->pc = 0x2B6504u;
label_2b6504:
    // 0x2b6504: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x2b6504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x2b6508: 0x8c420578  lw          $v0, 0x578($v0)
    ctx->pc = 0x2b6508u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x520578u));
    // 0x2b650c: 0x14510010  bne         $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B650Cu;
    {
        const bool branch_taken_0x2b650c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b650c) {
            ctx->pc = 0x2B6550u;
            goto label_2b6550;
        }
    }
    ctx->pc = 0x2B6514u;
    // 0x2b6514: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6514u;
    {
        const bool branch_taken_0x2b6514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6514u;
        // 0x2b6518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6514) {
            ctx->pc = 0x2B6538u;
            goto label_2b6538;
        }
    }
    ctx->pc = 0x2B651Cu;
    // 0x2b651c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b651cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b6520: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6520u;
    SET_GPR_U32(ctx, 31, 0x2B6528u);
    ctx->pc = 0x2B6524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6520u;
    // 0x2b6524: 0xa040a928  sb          $zero, -0x56D8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945064), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6520u, 0x2B6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6528u;
label_2b6528:
    // 0x2b6528: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b6528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b652c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b6530: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B6530u;
    {
        const bool branch_taken_0x2b6530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6530u;
        // 0x2b6534: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6530) {
            ctx->pc = 0x2B6570u;
            goto label_2b6570;
        }
    }
    ctx->pc = 0x2B6538u;
label_2b6538:
    // 0x2b6538: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B6538u;
    {
        const bool branch_taken_0x2b6538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6538u;
        // 0x2b653c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6538) {
            ctx->pc = 0x2B6570u;
            goto label_2b6570;
        }
    }
    ctx->pc = 0x2B6540u;
    // 0x2b6540: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b6540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6544: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b6544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6548: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6548u;
    {
        const bool branch_taken_0x2b6548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6548u;
        // 0x2b654c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6548) {
            ctx->pc = 0x2B6570u;
            goto label_2b6570;
        }
    }
    ctx->pc = 0x2B6550u;
label_2b6550:
    // 0x2b6550: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B6550u;
    SET_GPR_U32(ctx, 31, 0x2B6558u);
    ctx->pc = 0x2B6554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6550u;
    // 0x2b6554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B6550u, 0x2B6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6558u;
label_2b6558:
    // 0x2b6558: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6558u;
    {
        const bool branch_taken_0x2b6558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6558u;
        // 0x2b655c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6558) {
            ctx->pc = 0x2B656Cu;
            goto label_2b656c;
        }
    }
    ctx->pc = 0x2B6560u;
    // 0x2b6560: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b6560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b6564: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6564u;
    {
        const bool branch_taken_0x2b6564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6564u;
        // 0x2b6568: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6564) {
            ctx->pc = 0x2B6570u;
            goto label_2b6570;
        }
    }
    ctx->pc = 0x2B656Cu;
label_2b656c:
    // 0x2b656c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6570:
    // 0x2b6570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b6574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b657c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B657Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B657Cu;
        // 0x2b6580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B657Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6584u;
    // 0x2b6584: 0x0  nop
    ctx->pc = 0x2b6584u;
    // NOP
    ctx->pc = 0x2b6588u;
}
