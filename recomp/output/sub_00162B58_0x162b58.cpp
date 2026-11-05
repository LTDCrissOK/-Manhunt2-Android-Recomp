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

// Function: sub_00162B58
// Address: 0x162b58 - 0x162c10
void sub_00162B58_0x162b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162B58_0x162b58");
#endif

    switch (ctx->pc) {
        case 0x162b78u: goto label_162b78;
        case 0x162b80u: goto label_162b80;
        case 0x162b8cu: goto label_162b8c;
        case 0x162b9cu: goto label_162b9c;
        case 0x162bbcu: goto label_162bbc;
        case 0x162be4u: goto label_162be4;
        case 0x162bfcu: goto label_162bfc;
        default: break;
    }

    ctx->pc = 0x162b58u;

    // 0x162b58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162b5c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x162b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x162b60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x162b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x162b68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x162b6c: 0xae200354  sw          $zero, 0x354($s1)
    ctx->pc = 0x162b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 852), GPR_U32(ctx, 0));
    // 0x162b70: 0xc058d6e  jal         func_1635B8
    ctx->pc = 0x162B70u;
    SET_GPR_U32(ctx, 31, 0x162B78u);
    ctx->pc = 0x162B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B70u;
    // 0x162b74: 0xae200358  sw          $zero, 0x358($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1635B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1635B8u, 0x162B70u, 0x162B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B78u;
label_162b78:
    // 0x162b78: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x162B78u;
    SET_GPR_U32(ctx, 31, 0x162B80u);
    ctx->pc = 0x162B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B78u;
    // 0x162b7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x162B78u, 0x162B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B80u;
label_162b80:
    // 0x162b80: 0xae200348  sw          $zero, 0x348($s1)
    ctx->pc = 0x162b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 0));
    // 0x162b84: 0xc058f32  jal         func_163CC8
    ctx->pc = 0x162B84u;
    SET_GPR_U32(ctx, 31, 0x162B8Cu);
    ctx->pc = 0x162B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B84u;
    // 0x162b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163CC8u, 0x162B84u, 0x162B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B8Cu;
label_162b8c:
    // 0x162b8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162B8Cu;
    {
        const bool branch_taken_0x162b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B8Cu;
        // 0x162b90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b8c) {
            ctx->pc = 0x162BA8u;
            goto label_162ba8;
        }
    }
    ctx->pc = 0x162B94u;
    // 0x162b94: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x162B94u;
    SET_GPR_U32(ctx, 31, 0x162B9Cu);
    ctx->pc = 0x162B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B94u;
    // 0x162b98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x162B94u, 0x162B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B9Cu;
label_162b9c:
    // 0x162b9c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x162b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162ba0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x162BA0u;
    {
        const bool branch_taken_0x162ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BA0u;
        // 0x162ba4: 0xae220348  sw          $v0, 0x348($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ba0) {
            ctx->pc = 0x162BD8u;
            goto label_162bd8;
        }
    }
    ctx->pc = 0x162BA8u;
label_162ba8:
    // 0x162ba8: 0x92300341  lbu         $s0, 0x341($s1)
    ctx->pc = 0x162ba8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 833)));
    // 0x162bac: 0x92220340  lbu         $v0, 0x340($s1)
    ctx->pc = 0x162bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x162bb0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x162bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x162bb4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x162BB4u;
    SET_GPR_U32(ctx, 31, 0x162BBCu);
    ctx->pc = 0x162BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BB4u;
    // 0x162bb8: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x162BB4u, 0x162BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162BBCu;
label_162bbc:
    // 0x162bbc: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x162bbcu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x162bc0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x162BC0u;
    {
        const bool branch_taken_0x162bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x162bc0) {
            ctx->pc = 0x162BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162BC0u;
            // 0x162bc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x162BC8u;
            goto label_162bc8;
        }
    }
    ctx->pc = 0x162BC8u;
label_162bc8:
    // 0x162bc8: 0x92220340  lbu         $v0, 0x340($s1)
    ctx->pc = 0x162bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x162bcc: 0x1810  mfhi        $v1
    ctx->pc = 0x162bccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x162bd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162bd4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x162bd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_162bd8:
    // 0x162bd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x162bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bdc: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x162BDCu;
    SET_GPR_U32(ctx, 31, 0x162BE4u);
    ctx->pc = 0x162BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BDCu;
    // 0x162be0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x162BDCu, 0x162BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162BE4u;
label_162be4:
    // 0x162be4: 0xae20034c  sw          $zero, 0x34C($s1)
    ctx->pc = 0x162be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 844), GPR_U32(ctx, 0));
    // 0x162be8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x162be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bec: 0xae200334  sw          $zero, 0x334($s1)
    ctx->pc = 0x162becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 820), GPR_U32(ctx, 0));
    // 0x162bf0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x162bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162bf4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x162BF4u;
    SET_GPR_U32(ctx, 31, 0x162BFCu);
    ctx->pc = 0x162BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BF4u;
    // 0x162bf8: 0xae220344  sw          $v0, 0x344($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x162BF4u, 0x162BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162BFCu;
label_162bfc:
    // 0x162bfc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x162bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162c00: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x162c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162c04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x162c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162c08: 0x3e00008  jr          $ra
    ctx->pc = 0x162C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C08u;
        // 0x162c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162C10u;
}
