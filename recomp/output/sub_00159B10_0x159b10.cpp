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

// Function: sub_00159B10
// Address: 0x159b10 - 0x159be8
void sub_00159B10_0x159b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159B10_0x159b10");
#endif

    switch (ctx->pc) {
        case 0x159b38u: goto label_159b38;
        case 0x159b54u: goto label_159b54;
        case 0x159b60u: goto label_159b60;
        case 0x159b80u: goto label_159b80;
        case 0x159b88u: goto label_159b88;
        case 0x159ba0u: goto label_159ba0;
        case 0x159bc8u: goto label_159bc8;
        default: break;
    }

    ctx->pc = 0x159b10u;

    // 0x159b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x159b14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x159b18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x159b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159b20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x159b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x159b24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x159b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x159b28: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x159b28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x159b2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x159b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x159b30: 0xc04ef70  jal         func_13BDC0
    ctx->pc = 0x159B30u;
    SET_GPR_U32(ctx, 31, 0x159B38u);
    ctx->pc = 0x159B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159B30u;
    // 0x159b34: 0x26300320  addiu       $s0, $s1, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BDC0u, 0x159B30u, 0x159B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B38u;
label_159b38:
    // 0x159b38: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x159b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x159b3c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x159b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x159b40: 0xae2002f8  sw          $zero, 0x2F8($s1)
    ctx->pc = 0x159b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 760), GPR_U32(ctx, 0));
    // 0x159b44: 0x24420ca8  addiu       $v0, $v0, 0xCA8
    ctx->pc = 0x159b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3240));
    // 0x159b48: 0x26240300  addiu       $a0, $s1, 0x300
    ctx->pc = 0x159b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x159b4c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x159B4Cu;
    SET_GPR_U32(ctx, 31, 0x159B54u);
    ctx->pc = 0x159B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159B4Cu;
    // 0x159b50: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x159B4Cu, 0x159B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B54u;
label_159b54:
    // 0x159b54: 0xae200310  sw          $zero, 0x310($s1)
    ctx->pc = 0x159b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 0));
    // 0x159b58: 0xae200318  sw          $zero, 0x318($s1)
    ctx->pc = 0x159b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 0));
    // 0x159b5c: 0xae20031c  sw          $zero, 0x31C($s1)
    ctx->pc = 0x159b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 0));
label_159b60:
    // 0x159b60: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x159b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x159b64: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x159b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x159b68: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x159b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x159b6c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x159b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x159b70: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x159b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x159b74: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x159b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x159b78: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x159B78u;
    SET_GPR_U32(ctx, 31, 0x159B80u);
    ctx->pc = 0x159B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159B78u;
    // 0x159b7c: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x159B78u, 0x159B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B80u;
label_159b80:
    // 0x159b80: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x159B80u;
    SET_GPR_U32(ctx, 31, 0x159B88u);
    ctx->pc = 0x159B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159B80u;
    // 0x159b84: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x159B80u, 0x159B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B88u;
label_159b88:
    // 0x159b88: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x159b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x159b8c: 0x1653fff4  bne         $s2, $s3, . + 4 + (-0xC << 2)
    ctx->pc = 0x159B8Cu;
    {
        const bool branch_taken_0x159b8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x159B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B8Cu;
        // 0x159b90: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b8c) {
            ctx->pc = 0x159B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159b60;
        }
    }
    ctx->pc = 0x159B94u;
    // 0x159b94: 0x26220a24  addiu       $v0, $s1, 0xA24
    ctx->pc = 0x159b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2596));
    // 0x159b98: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x159b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x159b9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x159b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_159ba0:
    // 0x159ba0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x159ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x159ba4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x159ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x159ba8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x159ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x159bac: 0x0  nop
    ctx->pc = 0x159bacu;
    // NOP
    // 0x159bb0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x159BB0u;
    {
        const bool branch_taken_0x159bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x159BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BB0u;
        // 0x159bb4: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bb0) {
            ctx->pc = 0x159BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159ba0;
        }
    }
    ctx->pc = 0x159BB8u;
    // 0x159bb8: 0xae200b70  sw          $zero, 0xB70($s1)
    ctx->pc = 0x159bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2928), GPR_U32(ctx, 0));
    // 0x159bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159bc0: 0xc056834  jal         func_15A0D0
    ctx->pc = 0x159BC0u;
    SET_GPR_U32(ctx, 31, 0x159BC8u);
    ctx->pc = 0x159BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159BC0u;
    // 0x159bc4: 0xae200210  sw          $zero, 0x210($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0D0u, 0x159BC0u, 0x159BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159BC8u;
label_159bc8:
    // 0x159bc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x159bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159bd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x159bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159bd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x159bd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x159bdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x159bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159be0: 0x3e00008  jr          $ra
    ctx->pc = 0x159BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BE0u;
        // 0x159be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159BE8u;
}
