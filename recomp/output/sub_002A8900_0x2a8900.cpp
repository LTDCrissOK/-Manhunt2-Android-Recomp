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

// Function: sub_002A8900
// Address: 0x2a8900 - 0x2a89b0
void sub_002A8900_0x2a8900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8900_0x2a8900");
#endif

    switch (ctx->pc) {
        case 0x2a8900u: goto label_2a8900;
        case 0x2a8904u: goto label_2a8904;
        case 0x2a8908u: goto label_2a8908;
        case 0x2a890cu: goto label_2a890c;
        case 0x2a8910u: goto label_2a8910;
        case 0x2a8914u: goto label_2a8914;
        case 0x2a8918u: goto label_2a8918;
        case 0x2a891cu: goto label_2a891c;
        case 0x2a8920u: goto label_2a8920;
        case 0x2a8924u: goto label_2a8924;
        case 0x2a8928u: goto label_2a8928;
        case 0x2a892cu: goto label_2a892c;
        case 0x2a8930u: goto label_2a8930;
        case 0x2a8934u: goto label_2a8934;
        case 0x2a8938u: goto label_2a8938;
        case 0x2a893cu: goto label_2a893c;
        case 0x2a8940u: goto label_2a8940;
        case 0x2a8944u: goto label_2a8944;
        case 0x2a8948u: goto label_2a8948;
        case 0x2a894cu: goto label_2a894c;
        case 0x2a8950u: goto label_2a8950;
        case 0x2a8954u: goto label_2a8954;
        case 0x2a8958u: goto label_2a8958;
        case 0x2a895cu: goto label_2a895c;
        case 0x2a8960u: goto label_2a8960;
        case 0x2a8964u: goto label_2a8964;
        case 0x2a8968u: goto label_2a8968;
        case 0x2a896cu: goto label_2a896c;
        case 0x2a8970u: goto label_2a8970;
        case 0x2a8974u: goto label_2a8974;
        case 0x2a8978u: goto label_2a8978;
        case 0x2a897cu: goto label_2a897c;
        case 0x2a8980u: goto label_2a8980;
        case 0x2a8984u: goto label_2a8984;
        case 0x2a8988u: goto label_2a8988;
        case 0x2a898cu: goto label_2a898c;
        case 0x2a8990u: goto label_2a8990;
        case 0x2a8994u: goto label_2a8994;
        case 0x2a8998u: goto label_2a8998;
        case 0x2a899cu: goto label_2a899c;
        case 0x2a89a0u: goto label_2a89a0;
        case 0x2a89a4u: goto label_2a89a4;
        case 0x2a89a8u: goto label_2a89a8;
        case 0x2a89acu: goto label_2a89ac;
        default: break;
    }

    ctx->pc = 0x2a8900u;

label_2a8900:
    // 0x2a8900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a8900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a8904:
    // 0x2a8904: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a8904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2a8908:
    // 0x2a8908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a8908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2a890c:
    // 0x2a890c: 0x244237d8  addiu       $v0, $v0, 0x37D8
    ctx->pc = 0x2a890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14296));
label_2a8910:
    // 0x2a8910: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a8910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2a8914:
    // 0x2a8914: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a8914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8918:
    // 0x2a8918: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a8918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2a891c:
    // 0x2a891c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a891cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a8920:
    // 0x2a8920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a8920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a8924:
    // 0x2a8924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a8924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a8928:
    // 0x2a8928: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2a8928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2a892c:
    // 0x2a892c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x2a892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2a8930:
    // 0x2a8930: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_2a8934:
    if (ctx->pc == 0x2A8934u) {
        ctx->pc = 0x2A8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8930u;
        // 0x2a8934: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8938u;
        goto label_2a8938;
    }
    ctx->pc = 0x2A8930u;
    {
        const bool branch_taken_0x2a8930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8930u;
        // 0x2a8934: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8930) {
            ctx->pc = 0x2A8970u;
            goto label_2a8970;
        }
    }
    ctx->pc = 0x2A8938u;
label_2a8938:
    // 0x2a8938: 0x26500044  addiu       $s0, $s2, 0x44
    ctx->pc = 0x2a8938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
label_2a893c:
    // 0x2a893c: 0x0  nop
    ctx->pc = 0x2a893cu;
    // NOP
label_2a8940:
    // 0x2a8940: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a8940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a8944:
    // 0x2a8944: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2a8948:
    if (ctx->pc == 0x2A8948u) {
        ctx->pc = 0x2A8948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8944u;
        // 0x2a8948: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A894Cu;
        goto label_2a894c;
    }
    ctx->pc = 0x2A8944u;
    {
        const bool branch_taken_0x2a8944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8944) {
            ctx->pc = 0x2A8948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8944u;
            // 0x2a8948: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8960u;
            goto label_2a8960;
        }
    }
    ctx->pc = 0x2A894Cu;
label_2a894c:
    // 0x2a894c: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2a894cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_2a8950:
    // 0x2a8950: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a8950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a8954:
    // 0x2a8954: 0x40f809  jalr        $v0
label_2a8958:
    if (ctx->pc == 0x2A8958u) {
        ctx->pc = 0x2A8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8954u;
        // 0x2a8958: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A895Cu;
        goto label_2a895c;
    }
    ctx->pc = 0x2A8954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A895Cu);
        ctx->pc = 0x2A8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8954u;
        // 0x2a8958: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8954u, 0x2A895Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A895Cu;
label_2a895c:
    // 0x2a895c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2a895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2a8960:
    // 0x2a8960: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a8960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a8964:
    // 0x2a8964: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2a8964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a8968:
    // 0x2a8968: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2a896c:
    if (ctx->pc == 0x2A896Cu) {
        ctx->pc = 0x2A896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8968u;
        // 0x2a896c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8970u;
        goto label_2a8970;
    }
    ctx->pc = 0x2A8968u;
    {
        const bool branch_taken_0x2a8968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8968u;
        // 0x2a896c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8968) {
            ctx->pc = 0x2A8940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8940;
        }
    }
    ctx->pc = 0x2A8970u;
label_2a8970:
    // 0x2a8970: 0x26440044  addiu       $a0, $s2, 0x44
    ctx->pc = 0x2a8970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
label_2a8974:
    // 0x2a8974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8978:
    // 0x2a8978: 0xc0efab3  jal         func_3BEACC
label_2a897c:
    if (ctx->pc == 0x2A897Cu) {
        ctx->pc = 0x2A897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8978u;
        // 0x2a897c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8980u;
        goto label_2a8980;
    }
    ctx->pc = 0x2A8978u;
    SET_GPR_U32(ctx, 31, 0x2A8980u);
    ctx->pc = 0x2A897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8978u;
    // 0x2a897c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2A8978u, 0x2A8980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8980u;
label_2a8980:
    // 0x2a8980: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x2a8980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_2a8984:
    // 0x2a8984: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2a8988:
    if (ctx->pc == 0x2A8988u) {
        ctx->pc = 0x2A8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8984u;
        // 0x2a8988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A898Cu;
        goto label_2a898c;
    }
    ctx->pc = 0x2A8984u;
    {
        const bool branch_taken_0x2a8984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8984u;
        // 0x2a8988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8984) {
            ctx->pc = 0x2A8998u;
            goto label_2a8998;
        }
    }
    ctx->pc = 0x2A898Cu;
label_2a898c:
    // 0x2a898c: 0xc0f5222  jal         func_3D4888
label_2a8990:
    if (ctx->pc == 0x2A8990u) {
        ctx->pc = 0x2A8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A898Cu;
        // 0x2a8990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8994u;
        goto label_2a8994;
    }
    ctx->pc = 0x2A898Cu;
    SET_GPR_U32(ctx, 31, 0x2A8994u);
    ctx->pc = 0x2A8990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A898Cu;
    // 0x2a8990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A898Cu, 0x2A8994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8994u;
label_2a8994:
    // 0x2a8994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a8994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8998:
    // 0x2a8998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a8998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a899c:
    // 0x2a899c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a899cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a89a0:
    // 0x2a89a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a89a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2a89a4:
    // 0x2a89a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a89a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a89a8:
    // 0x2a89a8: 0x3e00008  jr          $ra
label_2a89ac:
    if (ctx->pc == 0x2A89ACu) {
        ctx->pc = 0x2A89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89A8u;
        // 0x2a89ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A89B0u;
        goto label_fallthrough_0x2a89a8;
    }
    ctx->pc = 0x2A89A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89A8u;
        // 0x2a89ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A89A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a89a8:
    ctx->pc = 0x2A89B0u;
}
