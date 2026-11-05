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

// Function: sub_001AEED8
// Address: 0x1aeed8 - 0x1aef90
void sub_001AEED8_0x1aeed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEED8_0x1aeed8");
#endif

    switch (ctx->pc) {
        case 0x1aeef8u: goto label_1aeef8;
        case 0x1aef60u: goto label_1aef60;
        case 0x1aef78u: goto label_1aef78;
        default: break;
    }

    ctx->pc = 0x1aeed8u;

    // 0x1aeed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aeed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aeedc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aeedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aeee0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aeee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aeee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aeee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aeee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aeeec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aeeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aeef0: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AEEF0u;
    SET_GPR_U32(ctx, 31, 0x1AEEF8u);
    ctx->pc = 0x1AEEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEEF0u;
    // 0x1aeef4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AEEF0u, 0x1AEEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEF8u;
label_1aeef8:
    // 0x1aeef8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aeef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeefc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aeefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aef00: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AEF00u;
    {
        const bool branch_taken_0x1aef00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF00u;
        // 0x1aef04: 0x241001ba  addiu       $s0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef00) {
            ctx->pc = 0x1AEF34u;
            goto label_1aef34;
        }
    }
    ctx->pc = 0x1AEF08u;
    // 0x1aef08: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1aef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aef0c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AEF0Cu;
    {
        const bool branch_taken_0x1aef0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF0Cu;
        // 0x1aef10: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef0c) {
            ctx->pc = 0x1AEF34u;
            goto label_1aef34;
        }
    }
    ctx->pc = 0x1AEF14u;
    // 0x1aef14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEF14u;
    {
        const bool branch_taken_0x1aef14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF14u;
        // 0x1aef18: 0x2402010a  addiu       $v0, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef14) {
            ctx->pc = 0x1AEF24u;
            goto label_1aef24;
        }
    }
    ctx->pc = 0x1AEF1Cu;
    // 0x1aef1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEF1Cu;
    {
        const bool branch_taken_0x1aef1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF1Cu;
        // 0x1aef20: 0x241000fc  addiu       $s0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef1c) {
            ctx->pc = 0x1AEF30u;
            goto label_1aef30;
        }
    }
    ctx->pc = 0x1AEF24u;
label_1aef24:
    // 0x1aef24: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEF24u;
    {
        const bool branch_taken_0x1aef24 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1AEF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF24u;
        // 0x1aef28: 0x24020106  addiu       $v0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef24) {
            ctx->pc = 0x1AEF34u;
            goto label_1aef34;
        }
    }
    ctx->pc = 0x1AEF2Cu;
    // 0x1aef2c: 0x241000f9  addiu       $s0, $zero, 0xF9
    ctx->pc = 0x1aef2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
label_1aef30:
    // 0x1aef30: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x1aef30u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1aef34:
    // 0x1aef34: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1aef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1aef38: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEF38u;
    {
        const bool branch_taken_0x1aef38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF38u;
        // 0x1aef3c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef38) {
            ctx->pc = 0x1AEF54u;
            goto label_1aef54;
        }
    }
    ctx->pc = 0x1AEF40u;
    // 0x1aef40: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1aef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1aef44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aef48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1aef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aef4c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEF4Cu;
    {
        const bool branch_taken_0x1aef4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF4Cu;
        // 0x1aef50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef4c) {
            ctx->pc = 0x1AEF68u;
            goto label_1aef68;
        }
    }
    ctx->pc = 0x1AEF54u;
label_1aef54:
    // 0x1aef54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef58: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AEF58u;
    SET_GPR_U32(ctx, 31, 0x1AEF60u);
    ctx->pc = 0x1AEF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF58u;
    // 0x1aef5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AEF58u, 0x1AEF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF60u;
label_1aef60:
    // 0x1aef60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEF60u;
    {
        const bool branch_taken_0x1aef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF60u;
        // 0x1aef64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef60) {
            ctx->pc = 0x1AEF7Cu;
            goto label_1aef7c;
        }
    }
    ctx->pc = 0x1AEF68u;
label_1aef68:
    // 0x1aef68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aef68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef6c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1aef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aef70: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AEF70u;
    SET_GPR_U32(ctx, 31, 0x1AEF78u);
    ctx->pc = 0x1AEF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF70u;
    // 0x1aef74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AEF70u, 0x1AEF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF78u;
label_1aef78:
    // 0x1aef78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aef78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aef7c:
    // 0x1aef7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aef7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aef80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aef80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aef84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aef84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aef88: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF88u;
        // 0x1aef8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEF90u;
}
