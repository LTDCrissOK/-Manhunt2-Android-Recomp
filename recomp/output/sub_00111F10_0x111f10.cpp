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

// Function: sub_00111F10
// Address: 0x111f10 - 0x111fb8
void sub_00111F10_0x111f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111F10_0x111f10");
#endif

    switch (ctx->pc) {
        case 0x111f88u: goto label_111f88;
        case 0x111fa0u: goto label_111fa0;
        default: break;
    }

    ctx->pc = 0x111f10u;

    // 0x111f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111f14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x111f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111f18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x111f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x111f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111f28: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x111f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x111f2c: 0x10a2001c  beq         $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x111F2Cu;
    {
        const bool branch_taken_0x111f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x111F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F2Cu;
        // 0x111f30: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f2c) {
            ctx->pc = 0x111FA0u;
            goto label_111fa0;
        }
    }
    ctx->pc = 0x111F34u;
    // 0x111f34: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x111f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x111f38: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x111f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x111f3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111f40: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x111f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x111f44: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x111F44u;
    {
        const bool branch_taken_0x111f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F44u;
        // 0x111f48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f44) {
            ctx->pc = 0x111FA4u;
            goto label_111fa4;
        }
    }
    ctx->pc = 0x111F4Cu;
    // 0x111f4c: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x111f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x111f50: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x111F50u;
    {
        const bool branch_taken_0x111f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x111f50) {
            ctx->pc = 0x111F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111F50u;
            // 0x111f54: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111FA8u;
            goto label_111fa8;
        }
    }
    ctx->pc = 0x111F58u;
    // 0x111f58: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x111f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x111f5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x111f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x111f60: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x111F60u;
    {
        const bool branch_taken_0x111f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111f60) {
            ctx->pc = 0x111F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111F60u;
            // 0x111f64: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111FA8u;
            goto label_111fa8;
        }
    }
    ctx->pc = 0x111F68u;
    // 0x111f68: 0x90620005  lbu         $v0, 0x5($v1)
    ctx->pc = 0x111f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x111f6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x111f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x111f70: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x111F70u;
    {
        const bool branch_taken_0x111f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111f70) {
            ctx->pc = 0x111F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111F70u;
            // 0x111f74: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111FA8u;
            goto label_111fa8;
        }
    }
    ctx->pc = 0x111F78u;
    // 0x111f78: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x111f78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x111f7c: 0x2610a080  addiu       $s0, $s0, -0x5F80
    ctx->pc = 0x111f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942848));
    // 0x111f80: 0xc049600  jal         func_125800
    ctx->pc = 0x111F80u;
    SET_GPR_U32(ctx, 31, 0x111F88u);
    ctx->pc = 0x111F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F80u;
    // 0x111f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125800u, 0x111F80u, 0x111F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F88u;
label_111f88:
    // 0x111f88: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x111f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x111f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f98: 0xc0495c0  jal         func_125700
    ctx->pc = 0x111F98u;
    SET_GPR_U32(ctx, 31, 0x111FA0u);
    ctx->pc = 0x111F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F98u;
    // 0x111f9c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x111F98u, 0x111FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FA0u;
label_111fa0:
    // 0x111fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111fa4:
    // 0x111fa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x111fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_111fa8:
    // 0x111fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111fac: 0x3e00008  jr          $ra
    ctx->pc = 0x111FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FACu;
        // 0x111fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111FB4u;
    // 0x111fb4: 0x0  nop
    ctx->pc = 0x111fb4u;
    // NOP
    ctx->pc = 0x111fb8u;
}
