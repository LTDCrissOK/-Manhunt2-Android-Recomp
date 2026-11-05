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

// Function: sub_001F4F80
// Address: 0x1f4f80 - 0x1f50a0
void sub_001F4F80_0x1f4f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4F80_0x1f4f80");
#endif

    switch (ctx->pc) {
        case 0x1f4fb0u: goto label_1f4fb0;
        case 0x1f507cu: goto label_1f507c;
        default: break;
    }

    ctx->pc = 0x1f4f80u;

    // 0x1f4f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f4f84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f4f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f4f88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f4f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f4f8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f4f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4f94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f4f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f98: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1f4f98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f4f9c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1f4f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fa0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f4fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f4fa4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1f4fa4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1f4fa8: 0xc07d3c8  jal         func_1F4F20
    ctx->pc = 0x1F4FA8u;
    SET_GPR_U32(ctx, 31, 0x1F4FB0u);
    ctx->pc = 0x1F4FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4FA8u;
    // 0x1f4fac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F20u, 0x1F4FA8u, 0x1F4FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4FB0u;
label_1f4fb0:
    // 0x1f4fb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4fb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fb4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1f4fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f4fb8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F4FB8u;
    {
        const bool branch_taken_0x1f4fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FB8u;
        // 0x1f4fbc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4fb8) {
            ctx->pc = 0x1F5014u;
            goto label_1f5014;
        }
    }
    ctx->pc = 0x1F4FC0u;
    // 0x1f4fc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f4fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f4fc4: 0x2442fb30  addiu       $v0, $v0, -0x4D0
    ctx->pc = 0x1f4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966064));
    // 0x1f4fc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f4fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f4fcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f4fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f4fd0: 0x800008  jr          $a0
    ctx->pc = 0x1F4FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4FD8u: goto label_1f4fd8;
            case 0x1F4FE4u: goto label_1f4fe4;
            case 0x1F4FF0u: goto label_1f4ff0;
            case 0x1F4FFCu: goto label_1f4ffc;
            case 0x1F5008u: goto label_1f5008;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4FD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F4FD8u;
label_1f4fd8:
    // 0x1f4fd8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4fdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F4FDCu;
    {
        const bool branch_taken_0x1f4fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FDCu;
        // 0x1f4fe0: 0x2442faa8  addiu       $v0, $v0, -0x558 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4fdc) {
            ctx->pc = 0x1F5010u;
            goto label_1f5010;
        }
    }
    ctx->pc = 0x1F4FE4u;
label_1f4fe4:
    // 0x1f4fe4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4fe8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4FE8u;
    {
        const bool branch_taken_0x1f4fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FE8u;
        // 0x1f4fec: 0x2442fac0  addiu       $v0, $v0, -0x540 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4fe8) {
            ctx->pc = 0x1F5010u;
            goto label_1f5010;
        }
    }
    ctx->pc = 0x1F4FF0u;
label_1f4ff0:
    // 0x1f4ff0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4ff4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4FF4u;
    {
        const bool branch_taken_0x1f4ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FF4u;
        // 0x1f4ff8: 0x2442fad8  addiu       $v0, $v0, -0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ff4) {
            ctx->pc = 0x1F5010u;
            goto label_1f5010;
        }
    }
    ctx->pc = 0x1F4FFCu;
label_1f4ffc:
    // 0x1f4ffc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f5000: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5000u;
    {
        const bool branch_taken_0x1f5000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5000u;
        // 0x1f5004: 0x2442faf8  addiu       $v0, $v0, -0x508 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5000) {
            ctx->pc = 0x1F5010u;
            goto label_1f5010;
        }
    }
    ctx->pc = 0x1F5008u;
label_1f5008:
    // 0x1f5008: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f5008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f500c: 0x2442fb10  addiu       $v0, $v0, -0x4F0
    ctx->pc = 0x1f500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966032));
label_1f5010:
    // 0x1f5010: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f5010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f5014:
    // 0x1f5014: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1f5014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1f5018: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1f5018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f501c: 0x8ca29294  lw          $v0, -0x6D6C($a1)
    ctx->pc = 0x1f501cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9294u));
    // 0x1f5020: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5020u;
    {
        const bool branch_taken_0x1f5020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5020) {
            ctx->pc = 0x1F5024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5020u;
            // 0x1f5024: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5028u;
            goto label_1f5028;
        }
    }
    ctx->pc = 0x1F5028u;
label_1f5028:
    // 0x1f5028: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1f5028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1f502c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f502cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5030: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f5030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5038: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1f5038u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f503c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f503cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5040: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f5040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f5044: 0x2010  mfhi        $a0
    ctx->pc = 0x1f5044u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f5048: 0xaca49294  sw          $a0, -0x6D6C($a1)
    ctx->pc = 0x1f5048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294939284), GPR_U32(ctx, 4));
    // 0x1f504c: 0x94a39294  lhu         $v1, -0x6D6C($a1)
    ctx->pc = 0x1f504cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294939284)));
    // 0x1f5050: 0xae260104  sw          $a2, 0x104($s1)
    ctx->pc = 0x1f5050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 6));
    // 0x1f5054: 0xa62300f4  sh          $v1, 0xF4($s1)
    ctx->pc = 0x1f5054u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5058: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5058u;
    {
        const bool branch_taken_0x1f5058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5058u;
        // 0x1f505c: 0xa22200fc  sb          $v0, 0xFC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 252), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5058) {
            ctx->pc = 0x1F507Cu;
            goto label_1f507c;
        }
    }
    ctx->pc = 0x1F5060u;
    // 0x1f5060: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1f5060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1f5064: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f5064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5068: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x1f5068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x1f506c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1f506cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f5070: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5074: 0xc046642  jal         func_119908
    ctx->pc = 0x1F5074u;
    SET_GPR_U32(ctx, 31, 0x1F507Cu);
    ctx->pc = 0x1F5078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5074u;
    // 0x1f5078: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x1F5074u, 0x1F507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F507Cu;
label_1f507c:
    // 0x1f507c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f507cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5088: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f508c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5090: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1f5090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f5094: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5094u;
        // 0x1f5098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F509Cu;
    // 0x1f509c: 0x0  nop
    ctx->pc = 0x1f509cu;
    // NOP
    ctx->pc = 0x1f50a0u;
}
