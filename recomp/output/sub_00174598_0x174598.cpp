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

// Function: sub_00174598
// Address: 0x174598 - 0x1746a0
void sub_00174598_0x174598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174598_0x174598");
#endif

    switch (ctx->pc) {
        case 0x1745b0u: goto label_1745b0;
        case 0x17465cu: goto label_17465c;
        case 0x174680u: goto label_174680;
        default: break;
    }

    ctx->pc = 0x174598u;

    // 0x174598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17459c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1745a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1745a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1745a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1745a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1745a8: 0xc04fa2c  jal         func_13E8B0
    ctx->pc = 0x1745A8u;
    SET_GPR_U32(ctx, 31, 0x1745B0u);
    ctx->pc = 0x1745ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1745A8u;
    // 0x1745ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E8B0u, 0x1745A8u, 0x1745B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1745B0u;
label_1745b0:
    // 0x1745b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1745b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1745b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1745b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1745b8: 0x0  nop
    ctx->pc = 0x1745b8u;
    // NOP
    // 0x1745bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1745bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1745c0: 0x0  nop
    ctx->pc = 0x1745c0u;
    // NOP
    // 0x1745c4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1745C4u;
    {
        const bool branch_taken_0x1745c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1745C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745C4u;
        // 0x1745c8: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745c4) {
            ctx->pc = 0x174640u;
            goto label_174640;
        }
    }
    ctx->pc = 0x1745CCu;
    // 0x1745cc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1745ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1745d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1745d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1745d4: 0x0  nop
    ctx->pc = 0x1745d4u;
    // NOP
    // 0x1745d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1745d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1745dc: 0x0  nop
    ctx->pc = 0x1745dcu;
    // NOP
    // 0x1745e0: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1745E0u;
    {
        const bool branch_taken_0x1745e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1745E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745E0u;
        // 0x1745e4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745e0) {
            ctx->pc = 0x174640u;
            goto label_174640;
        }
    }
    ctx->pc = 0x1745E8u;
    // 0x1745e8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1745e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1745ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1745ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1745f0: 0x0  nop
    ctx->pc = 0x1745f0u;
    // NOP
    // 0x1745f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1745f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1745f8: 0x0  nop
    ctx->pc = 0x1745f8u;
    // NOP
    // 0x1745fc: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1745FCu;
    {
        const bool branch_taken_0x1745fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x174600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745FCu;
        // 0x174600: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745fc) {
            ctx->pc = 0x174640u;
            goto label_174640;
        }
    }
    ctx->pc = 0x174604u;
    // 0x174604: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x174604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x174608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x174608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17460c: 0x0  nop
    ctx->pc = 0x17460cu;
    // NOP
    // 0x174610: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x174610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174614: 0x0  nop
    ctx->pc = 0x174614u;
    // NOP
    // 0x174618: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x174618u;
    {
        const bool branch_taken_0x174618 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174618u;
        // 0x17461c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174618) {
            ctx->pc = 0x174640u;
            goto label_174640;
        }
    }
    ctx->pc = 0x174620u;
    // 0x174620: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x174620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x174624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x174624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174628: 0x0  nop
    ctx->pc = 0x174628u;
    // NOP
    // 0x17462c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17462cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174630: 0x0  nop
    ctx->pc = 0x174630u;
    // NOP
    // 0x174634: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x174634u;
    {
        const bool branch_taken_0x174634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x174638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174634u;
        // 0x174638: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174634) {
            ctx->pc = 0x174640u;
            goto label_174640;
        }
    }
    ctx->pc = 0x17463Cu;
    // 0x17463c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17463cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174640:
    // 0x174640: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x174640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x174644: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x174644u;
    {
        const bool branch_taken_0x174644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x174648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174644u;
        // 0x174648: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174644) {
            ctx->pc = 0x17468Cu;
            goto label_17468c;
        }
    }
    ctx->pc = 0x17464Cu;
    // 0x17464c: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17464Cu;
    {
        const bool branch_taken_0x17464c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17464c) {
            ctx->pc = 0x174650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17464Cu;
            // 0x174650: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174690u;
            goto label_174690;
        }
    }
    ctx->pc = 0x174654u;
    // 0x174654: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x174654u;
    SET_GPR_U32(ctx, 31, 0x17465Cu);
    ctx->pc = 0x174658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174654u;
    // 0x174658: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x174654u, 0x17465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17465Cu;
label_17465c:
    // 0x17465c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x17465cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x174660: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x174660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x174664: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x174664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x174668: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x174668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17466c: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x17466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x174670: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174670u;
    {
        const bool branch_taken_0x174670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174670u;
        // 0x174674: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174670) {
            ctx->pc = 0x17468Cu;
            goto label_17468c;
        }
    }
    ctx->pc = 0x174678u;
    // 0x174678: 0xc043a12  jal         func_10E848
    ctx->pc = 0x174678u;
    SET_GPR_U32(ctx, 31, 0x174680u);
    ctx->pc = 0x10E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E848u, 0x174678u, 0x174680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174680u;
label_174680:
    // 0x174680: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x174680u;
    {
        const bool branch_taken_0x174680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174680u;
        // 0x174684: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174680) {
            ctx->pc = 0x17468Cu;
            goto label_17468c;
        }
    }
    ctx->pc = 0x174688u;
    // 0x174688: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17468c:
    // 0x17468c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17468cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174690:
    // 0x174690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174698: 0x3e00008  jr          $ra
    ctx->pc = 0x174698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174698u;
        // 0x17469c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1746A0u;
}
