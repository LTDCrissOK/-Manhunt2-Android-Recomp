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

// Function: sub_00120028
// Address: 0x120028 - 0x1200f0
void sub_00120028_0x120028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120028_0x120028");
#endif

    switch (ctx->pc) {
        case 0x1200a0u: goto label_1200a0;
        case 0x1200bcu: goto label_1200bc;
        default: break;
    }

    ctx->pc = 0x120028u;

    // 0x120028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12002c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x12002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120030: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x120030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x120034: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x120034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x120038: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x120038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12003c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12003cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120044: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x120044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x120048: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x120048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12004c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x12004cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x120050: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x120050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x120054: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x120054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x120058: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x120058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12005c: 0x8cb0020c  lw          $s0, 0x20C($a1)
    ctx->pc = 0x12005cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x120060: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x120060u;
    {
        const bool branch_taken_0x120060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x120064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120060u;
        // 0x120064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120060) {
            ctx->pc = 0x1200D4u;
            goto label_1200d4;
        }
    }
    ctx->pc = 0x120068u;
    // 0x120068: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x120068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12006c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12006cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x120070: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x120070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120074: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x120074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x120078: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x120078u;
    {
        const bool branch_taken_0x120078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120078) {
            ctx->pc = 0x12007Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120078u;
            // 0x12007c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120088u;
            goto label_120088;
        }
    }
    ctx->pc = 0x120080u;
    // 0x120080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x120080u;
    {
        const bool branch_taken_0x120080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120080u;
        // 0x120084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120080) {
            ctx->pc = 0x120090u;
            goto label_120090;
        }
    }
    ctx->pc = 0x120088u;
label_120088:
    // 0x120088: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12008c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x12008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_120090:
    // 0x120090: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x120090u;
    {
        const bool branch_taken_0x120090 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x120094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120090u;
        // 0x120094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120090) {
            ctx->pc = 0x1200D4u;
            goto label_1200d4;
        }
    }
    ctx->pc = 0x120098u;
    // 0x120098: 0xc0480b6  jal         func_1202D8
    ctx->pc = 0x120098u;
    SET_GPR_U32(ctx, 31, 0x1200A0u);
    ctx->pc = 0x12009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120098u;
    // 0x12009c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202D8u, 0x120098u, 0x1200A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200A0u;
label_1200a0:
    // 0x1200a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1200A0u;
    {
        const bool branch_taken_0x1200a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1200A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200A0u;
        // 0x1200a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200a0) {
            ctx->pc = 0x1200B0u;
            goto label_1200b0;
        }
    }
    ctx->pc = 0x1200A8u;
    // 0x1200a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1200A8u;
    {
        const bool branch_taken_0x1200a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1200ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200A8u;
        // 0x1200ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200a8) {
            ctx->pc = 0x1200D4u;
            goto label_1200d4;
        }
    }
    ctx->pc = 0x1200B0u;
label_1200b0:
    // 0x1200b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1200b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200b4: 0xc048254  jal         func_120950
    ctx->pc = 0x1200B4u;
    SET_GPR_U32(ctx, 31, 0x1200BCu);
    ctx->pc = 0x1200B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200B4u;
    // 0x1200b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120950u, 0x1200B4u, 0x1200BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200BCu;
label_1200bc:
    // 0x1200bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1200BCu;
    {
        const bool branch_taken_0x1200bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1200C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200BCu;
        // 0x1200c0: 0x2403003b  addiu       $v1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200bc) {
            ctx->pc = 0x1200D0u;
            goto label_1200d0;
        }
    }
    ctx->pc = 0x1200C4u;
    // 0x1200c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1200c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1200c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1200C8u;
    {
        const bool branch_taken_0x1200c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1200CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200C8u;
        // 0x1200cc: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200c8) {
            ctx->pc = 0x1200D4u;
            goto label_1200d4;
        }
    }
    ctx->pc = 0x1200D0u;
label_1200d0:
    // 0x1200d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1200d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1200d4:
    // 0x1200d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1200d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1200d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1200d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1200dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1200dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1200e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1200e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1200e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1200E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1200E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200E4u;
        // 0x1200e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1200E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1200ECu;
    // 0x1200ec: 0x0  nop
    ctx->pc = 0x1200ecu;
    // NOP
    ctx->pc = 0x1200f0u;
}
