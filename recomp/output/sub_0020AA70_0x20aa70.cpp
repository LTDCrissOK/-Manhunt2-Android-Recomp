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

// Function: sub_0020AA70
// Address: 0x20aa70 - 0x20ab48
void sub_0020AA70_0x20aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AA70_0x20aa70");
#endif

    switch (ctx->pc) {
        case 0x20aad0u: goto label_20aad0;
        case 0x20ab00u: goto label_20ab00;
        default: break;
    }

    ctx->pc = 0x20aa70u;

    // 0x20aa70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20aa74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20aa78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20aa7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20aa7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20aa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20aa84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20aa84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20aa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20aa8c: 0x2a222001  slti        $v0, $s1, 0x2001
    ctx->pc = 0x20aa8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x20aa90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20aa94: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x20AA94u;
    {
        const bool branch_taken_0x20aa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA94u;
        // 0x20aa98: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa94) {
            ctx->pc = 0x20AB1Cu;
            goto label_20ab1c;
        }
    }
    ctx->pc = 0x20AA9Cu;
    // 0x20aa9c: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x20aa9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x20aaa0: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x20aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x20aaa4: 0x8e63947c  lw          $v1, -0x6B84($s3)
    ctx->pc = 0x20aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F947Cu));
    // 0x20aaa8: 0x838023  subu        $s0, $a0, $v1
    ctx->pc = 0x20aaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20aaac: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x20aaacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x20aab0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20AAB0u;
    {
        const bool branch_taken_0x20aab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAB0u;
        // 0x20aab4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aab0) {
            ctx->pc = 0x20AADCu;
            goto label_20aadc;
        }
    }
    ctx->pc = 0x20AAB8u;
    // 0x20aab8: 0x8e62947c  lw          $v0, -0x6B84($s3)
    ctx->pc = 0x20aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939772)));
    // 0x20aabc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x20aac0: 0x2484c110  addiu       $a0, $a0, -0x3EF0
    ctx->pc = 0x20aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951184));
    // 0x20aac4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x20aac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20aac8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x20AAC8u;
    SET_GPR_U32(ctx, 31, 0x20AAD0u);
    ctx->pc = 0x20AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AAC8u;
    // 0x20aacc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x20AAC8u, 0x20AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAD0u;
label_20aad0:
    // 0x20aad0: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x20aad0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x20aad4: 0xae60947c  sw          $zero, -0x6B84($s3)
    ctx->pc = 0x20aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294939772), GPR_U32(ctx, 0));
    // 0x20aad8: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x20aad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_20aadc:
    // 0x20aadc: 0x5a200010  blezl       $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20AADCu;
    {
        const bool branch_taken_0x20aadc = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x20aadc) {
            ctx->pc = 0x20AAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AADCu;
            // 0x20aae0: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AB20u;
            goto label_20ab20;
        }
    }
    ctx->pc = 0x20AAE4u;
    // 0x20aae4: 0x8e62947c  lw          $v0, -0x6B84($s3)
    ctx->pc = 0x20aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939772)));
    // 0x20aae8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20aae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x20aaec: 0x2484c110  addiu       $a0, $a0, -0x3EF0
    ctx->pc = 0x20aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951184));
    // 0x20aaf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20aaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aaf4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x20aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20aaf8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x20AAF8u;
    SET_GPR_U32(ctx, 31, 0x20AB00u);
    ctx->pc = 0x20AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AAF8u;
    // 0x20aafc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x20AAF8u, 0x20AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB00u;
label_20ab00:
    // 0x20ab00: 0x8e63947c  lw          $v1, -0x6B84($s3)
    ctx->pc = 0x20ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939772)));
    // 0x20ab04: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x20ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20ab08: 0xae63947c  sw          $v1, -0x6B84($s3)
    ctx->pc = 0x20ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294939772), GPR_U32(ctx, 3));
    // 0x20ab0c: 0x8e62947c  lw          $v0, -0x6B84($s3)
    ctx->pc = 0x20ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939772)));
    // 0x20ab10: 0x28422000  slti        $v0, $v0, 0x2000
    ctx->pc = 0x20ab10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x20ab14: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20AB14u;
    {
        const bool branch_taken_0x20ab14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ab14) {
            ctx->pc = 0x20AB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB14u;
            // 0x20ab18: 0xae60947c  sw          $zero, -0x6B84($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294939772), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AB1Cu;
            goto label_20ab1c;
        }
    }
    ctx->pc = 0x20AB1Cu;
label_20ab1c:
    // 0x20ab1c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x20ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20ab20:
    // 0x20ab20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ab20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ab24: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x20ab24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x20ab28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ab28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ab2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20ab2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ab30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20ab30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20ab34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20ab34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ab38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20ab38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ab3c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20ab3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20ab40: 0x3e00008  jr          $ra
    ctx->pc = 0x20AB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB40u;
        // 0x20ab44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AB48u;
}
