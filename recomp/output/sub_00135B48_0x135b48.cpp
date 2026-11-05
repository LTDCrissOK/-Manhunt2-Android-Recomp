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

// Function: sub_00135B48
// Address: 0x135b48 - 0x135bf8
void sub_00135B48_0x135b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135B48_0x135b48");
#endif

    switch (ctx->pc) {
        case 0x135b88u: goto label_135b88;
        case 0x135ba0u: goto label_135ba0;
        case 0x135ba8u: goto label_135ba8;
        case 0x135bb4u: goto label_135bb4;
        case 0x135bd0u: goto label_135bd0;
        default: break;
    }

    ctx->pc = 0x135b48u;

    // 0x135b48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x135b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x135b4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x135b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x135b50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x135b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x135b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135b58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x135b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x135b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x135b60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x135b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x135b64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x135b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x135b68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x135b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x135b6c: 0x925304b0  lbu         $s3, 0x4B0($s2)
    ctx->pc = 0x135b6cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1200)));
    // 0x135b70: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x135B70u;
    {
        const bool branch_taken_0x135b70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x135B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B70u;
        // 0x135b74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b70) {
            ctx->pc = 0x135BC8u;
            goto label_135bc8;
        }
    }
    ctx->pc = 0x135B78u;
    // 0x135b78: 0x26540470  addiu       $s4, $s2, 0x470
    ctx->pc = 0x135b78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1136));
    // 0x135b7c: 0x3c150049  lui         $s5, 0x49
    ctx->pc = 0x135b7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)73 << 16));
    // 0x135b80: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x135b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x135b84: 0x0  nop
    ctx->pc = 0x135b84u;
    // NOP
label_135b88:
    // 0x135b88: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x135b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x135b8c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x135b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135b90: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x135B90u;
    {
        const bool branch_taken_0x135b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x135B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B90u;
        // 0x135b94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b90) {
            ctx->pc = 0x135BB4u;
            goto label_135bb4;
        }
    }
    ctx->pc = 0x135B98u;
    // 0x135b98: 0xc04db16  jal         func_136C58
    ctx->pc = 0x135B98u;
    SET_GPR_U32(ctx, 31, 0x135BA0u);
    ctx->pc = 0x135B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B98u;
    // 0x135b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C58u, 0x135B98u, 0x135BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BA0u;
label_135ba0:
    // 0x135ba0: 0xc042426  jal         func_109098
    ctx->pc = 0x135BA0u;
    SET_GPR_U32(ctx, 31, 0x135BA8u);
    ctx->pc = 0x135BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BA0u;
    // 0x135ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109098u, 0x135BA0u, 0x135BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BA8u;
label_135ba8:
    // 0x135ba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135bac: 0xc041eca  jal         func_107B28
    ctx->pc = 0x135BACu;
    SET_GPR_U32(ctx, 31, 0x135BB4u);
    ctx->pc = 0x135BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BACu;
    // 0x135bb0: 0x26a48758  addiu       $a0, $s5, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B28u, 0x135BACu, 0x135BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BB4u;
label_135bb4:
    // 0x135bb4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x135bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x135bb8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x135bb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135bbc: 0x233182b  sltu        $v1, $s1, $s3
    ctx->pc = 0x135bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x135bc0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x135BC0u;
    {
        const bool branch_taken_0x135bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BC0u;
        // 0x135bc4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135bc0) {
            ctx->pc = 0x135B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135b88;
        }
    }
    ctx->pc = 0x135BC8u;
label_135bc8:
    // 0x135bc8: 0xc04f71c  jal         func_13DC70
    ctx->pc = 0x135BC8u;
    SET_GPR_U32(ctx, 31, 0x135BD0u);
    ctx->pc = 0x135BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BC8u;
    // 0x135bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC70u, 0x135BC8u, 0x135BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BD0u;
label_135bd0:
    // 0x135bd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135bd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135bd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135bdc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135bdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135be0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135be0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135be4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135be4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135be8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135bec: 0x3e00008  jr          $ra
    ctx->pc = 0x135BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BECu;
        // 0x135bf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135BF4u;
    // 0x135bf4: 0x0  nop
    ctx->pc = 0x135bf4u;
    // NOP
    ctx->pc = 0x135bf8u;
}
