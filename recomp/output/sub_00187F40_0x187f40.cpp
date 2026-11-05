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

// Function: sub_00187F40
// Address: 0x187f40 - 0x188050
void sub_00187F40_0x187f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187F40_0x187f40");
#endif

    switch (ctx->pc) {
        case 0x187f80u: goto label_187f80;
        case 0x187f94u: goto label_187f94;
        case 0x187fb0u: goto label_187fb0;
        case 0x187fd8u: goto label_187fd8;
        case 0x187ff8u: goto label_187ff8;
        default: break;
    }

    ctx->pc = 0x187f40u;

    // 0x187f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187f44: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x187f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x187f48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187f4c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x187f4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x187f54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x187f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x187f58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x187f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x187f5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x187f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x187f60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x187f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x187f64: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x187f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x187f68: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x187f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x187f6c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x187F6Cu;
    {
        const bool branch_taken_0x187f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F6Cu;
        // 0x187f70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f6c) {
            ctx->pc = 0x18802Cu;
            goto label_18802c;
        }
    }
    ctx->pc = 0x187F74u;
    // 0x187f74: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x187f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x187f78: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x187F78u;
    SET_GPR_U32(ctx, 31, 0x187F80u);
    ctx->pc = 0x187F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187F78u;
    // 0x187f7c: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187F78u, 0x187F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F80u;
label_187f80:
    // 0x187f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f84: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x187f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x187f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f8c: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x187F8Cu;
    SET_GPR_U32(ctx, 31, 0x187F94u);
    ctx->pc = 0x187F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187F8Cu;
    // 0x187f90: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x187F8Cu, 0x187F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F94u;
label_187f94:
    // 0x187f94: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x187f94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x187f98: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x187f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x187f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fa0: 0x244212c0  addiu       $v0, $v0, 0x12C0
    ctx->pc = 0x187fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x187fa4: 0x26140050  addiu       $s4, $s0, 0x50
    ctx->pc = 0x187fa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x187fa8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x187FA8u;
    SET_GPR_U32(ctx, 31, 0x187FB0u);
    ctx->pc = 0x187FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FA8u;
    // 0x187fac: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187FA8u, 0x187FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FB0u;
label_187fb0:
    // 0x187fb0: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x187fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x187fb4: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x187fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x187fb8: 0x26520f90  addiu       $s2, $s2, 0xF90
    ctx->pc = 0x187fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3984));
    // 0x187fbc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x187fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x187fc0: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x187fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
    // 0x187fc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fc8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x187fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x187fcc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x187fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x187fd0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x187FD0u;
    SET_GPR_U32(ctx, 31, 0x187FD8u);
    ctx->pc = 0x187FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FD0u;
    // 0x187fd4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187FD0u, 0x187FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FD8u;
label_187fd8:
    // 0x187fd8: 0xae720018  sw          $s2, 0x18($s3)
    ctx->pc = 0x187fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 18));
    // 0x187fdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x187fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fe0: 0xae750010  sw          $s5, 0x10($s3)
    ctx->pc = 0x187fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 21));
    // 0x187fe4: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x187fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x187fe8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x187fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x187fec: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x187fecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x187ff0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x187FF0u;
    SET_GPR_U32(ctx, 31, 0x187FF8u);
    ctx->pc = 0x187FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FF0u;
    // 0x187ff4: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187FF0u, 0x187FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FF8u;
label_187ff8:
    // 0x187ff8: 0xae920018  sw          $s2, 0x18($s4)
    ctx->pc = 0x187ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 18));
    // 0x187ffc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x187ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x188000: 0xae950010  sw          $s5, 0x10($s4)
    ctx->pc = 0x188000u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
    // 0x188004: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x188004u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x188008: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x188008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x18800c: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x18800cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x188010: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x188010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x188014: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x188014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x188018: 0xaed00020  sw          $s0, 0x20($s6)
    ctx->pc = 0x188018u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 16));
    // 0x18801c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x18801cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x188020: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x188020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x188024: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x188024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x188028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18802c:
    // 0x18802c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18802cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x188030: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x188030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188034: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x188034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x188038: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x188038u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18803c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18803cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188040: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x188040u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188044: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x188044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x188048: 0x3e00008  jr          $ra
    ctx->pc = 0x188048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188048u;
        // 0x18804c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188050u;
}
