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

// Function: sub_00158F08
// Address: 0x158f08 - 0x159028
void sub_00158F08_0x158f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158F08_0x158f08");
#endif

    switch (ctx->pc) {
        case 0x158f90u: goto label_158f90;
        case 0x158fa4u: goto label_158fa4;
        case 0x158fd4u: goto label_158fd4;
        case 0x158fe4u: goto label_158fe4;
        case 0x158ffcu: goto label_158ffc;
        case 0x15900cu: goto label_15900c;
        default: break;
    }

    ctx->pc = 0x158f08u;

    // 0x158f08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158f0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x158f0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158f14: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x158f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x158f18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x158f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x158f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x158f24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x158f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158f2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x158f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x158f34: 0x8e320054  lw          $s2, 0x54($s1)
    ctx->pc = 0x158f34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x158f38: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x158F38u;
    {
        const bool branch_taken_0x158f38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x158F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F38u;
        // 0x158f3c: 0xae060218  sw          $a2, 0x218($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f38) {
            ctx->pc = 0x158F70u;
            goto label_158f70;
        }
    }
    ctx->pc = 0x158F40u;
    // 0x158f40: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x158f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x158f44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158F44u;
    {
        const bool branch_taken_0x158f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F44u;
        // 0x158f48: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f44) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F4Cu;
    // 0x158f4c: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158F4Cu;
    {
        const bool branch_taken_0x158f4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x158F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F4Cu;
        // 0x158f50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f4c) {
            ctx->pc = 0x158F74u;
            goto label_158f74;
        }
    }
    ctx->pc = 0x158F54u;
    // 0x158f54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x158F54u;
    {
        const bool branch_taken_0x158f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f54) {
            ctx->pc = 0x158F80u;
            goto label_158f80;
        }
    }
    ctx->pc = 0x158F5Cu;
label_158f5c:
    // 0x158f5c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x158f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158f60: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158F60u;
    {
        const bool branch_taken_0x158f60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x158F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F60u;
        // 0x158f64: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f60) {
            ctx->pc = 0x158F74u;
            goto label_158f74;
        }
    }
    ctx->pc = 0x158F68u;
    // 0x158f68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x158F68u;
    {
        const bool branch_taken_0x158f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f68) {
            ctx->pc = 0x158F80u;
            goto label_158f80;
        }
    }
    ctx->pc = 0x158F70u;
label_158f70:
    // 0x158f70: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x158f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_158f74:
    // 0x158f74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158f78: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x158f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x158f7c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x158f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158f80:
    // 0x158f80: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x158F80u;
    {
        const bool branch_taken_0x158f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f80) {
            ctx->pc = 0x158F94u;
            goto label_158f94;
        }
    }
    ctx->pc = 0x158F88u;
    // 0x158f88: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x158F88u;
    SET_GPR_U32(ctx, 31, 0x158F90u);
    ctx->pc = 0x158F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158F88u;
    // 0x158f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x158F88u, 0x158F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F90u;
label_158f90:
    // 0x158f90: 0xae0202e4  sw          $v0, 0x2E4($s0)
    ctx->pc = 0x158f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
label_158f94:
    // 0x158f94: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x158F94u;
    {
        const bool branch_taken_0x158f94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F94u;
        // 0x158f98: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f94) {
            ctx->pc = 0x158FC4u;
            goto label_158fc4;
        }
    }
    ctx->pc = 0x158F9Cu;
    // 0x158f9c: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x158F9Cu;
    SET_GPR_U32(ctx, 31, 0x158FA4u);
    ctx->pc = 0x158FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158F9Cu;
    // 0x158fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x158F9Cu, 0x158FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158FA4u;
label_158fa4:
    // 0x158fa4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x158fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x158fa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158fac: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x158facu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x158fb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x158fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x158fb4: 0xe60202f0  swc1        $f2, 0x2F0($s0)
    ctx->pc = 0x158fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    // 0x158fb8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x158fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x158fbc: 0xe60002f4  swc1        $f0, 0x2F4($s0)
    ctx->pc = 0x158fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
    // 0x158fc0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x158fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_158fc4:
    // 0x158fc4: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x158FC4u;
    {
        const bool branch_taken_0x158fc4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x158fc4) {
            ctx->pc = 0x158FF4u;
            goto label_158ff4;
        }
    }
    ctx->pc = 0x158FCCu;
    // 0x158fcc: 0xc046002  jal         func_118008
    ctx->pc = 0x158FCCu;
    SET_GPR_U32(ctx, 31, 0x158FD4u);
    ctx->pc = 0x158FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158FCCu;
    // 0x158fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x158FCCu, 0x158FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158FD4u;
label_158fd4:
    // 0x158fd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x158FD4u;
    {
        const bool branch_taken_0x158fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FD4u;
        // 0x158fd8: 0xae0202e8  sw          $v0, 0x2E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fd4) {
            ctx->pc = 0x158FF4u;
            goto label_158ff4;
        }
    }
    ctx->pc = 0x158FDCu;
    // 0x158fdc: 0xc046272  jal         func_1189C8
    ctx->pc = 0x158FDCu;
    SET_GPR_U32(ctx, 31, 0x158FE4u);
    ctx->pc = 0x158FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158FDCu;
    // 0x158fe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x158FDCu, 0x158FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158FE4u;
label_158fe4:
    // 0x158fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158fe8: 0x0  nop
    ctx->pc = 0x158fe8u;
    // NOP
    // 0x158fec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x158ff0: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x158ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
label_158ff4:
    // 0x158ff4: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x158FF4u;
    SET_GPR_U32(ctx, 31, 0x158FFCu);
    ctx->pc = 0x158FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158FF4u;
    // 0x158ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x158FF4u, 0x158FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158FFCu;
label_158ffc:
    // 0x158ffc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x158ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x159000: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x159000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159004: 0xc042136  jal         func_1084D8
    ctx->pc = 0x159004u;
    SET_GPR_U32(ctx, 31, 0x15900Cu);
    ctx->pc = 0x159008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159004u;
    // 0x159008: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x159004u, 0x15900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15900Cu;
label_15900c:
    // 0x15900c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15900cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159014: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x159014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159018: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x159018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15901c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15901cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159020: 0x3e00008  jr          $ra
    ctx->pc = 0x159020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159020u;
        // 0x159024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159028u;
}
