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

// Function: sub_002B7B88
// Address: 0x2b7b88 - 0x2b7db8
void sub_002B7B88_0x2b7b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7B88_0x2b7b88");
#endif

    switch (ctx->pc) {
        case 0x2b7bc4u: goto label_2b7bc4;
        case 0x2b7be0u: goto label_2b7be0;
        case 0x2b7be8u: goto label_2b7be8;
        case 0x2b7c94u: goto label_2b7c94;
        case 0x2b7cacu: goto label_2b7cac;
        case 0x2b7cc4u: goto label_2b7cc4;
        case 0x2b7cd4u: goto label_2b7cd4;
        case 0x2b7d1cu: goto label_2b7d1c;
        case 0x2b7d88u: goto label_2b7d88;
        default: break;
    }

    ctx->pc = 0x2b7b88u;

    // 0x2b7b88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b7b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b7b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7b90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b7b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b7b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b7b9c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b7b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7ba0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b7ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b7ba4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b7ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ba8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b7ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b7bac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b7bacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7bb0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2b7bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2b7bb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b7bb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7bb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b7bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b7bbc: 0xc0ade78  jal         func_2B79E0
    ctx->pc = 0x2B7BBCu;
    SET_GPR_U32(ctx, 31, 0x2B7BC4u);
    ctx->pc = 0x2B7BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7BBCu;
    // 0x2b7bc0: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79E0u, 0x2B7BBCu, 0x2B7BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7BC4u;
label_2b7bc4:
    // 0x2b7bc4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B7BC4u;
    {
        const bool branch_taken_0x2b7bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BC4u;
        // 0x2b7bc8: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7bc4) {
            ctx->pc = 0x2B7C64u;
            goto label_2b7c64;
        }
    }
    ctx->pc = 0x2B7BCCu;
    // 0x2b7bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7bd0: 0xac40a320  sw          $zero, -0x5CE0($v0)
    ctx->pc = 0x2b7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943520), GPR_U32(ctx, 0));
    // 0x2b7bd4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2b7bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2b7bd8: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B7BD8u;
    SET_GPR_U32(ctx, 31, 0x2B7BE0u);
    ctx->pc = 0x2B7BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7BD8u;
    // 0x2b7bdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B7BD8u, 0x2B7BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7BE0u;
label_2b7be0:
    // 0x2b7be0: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B7BE0u;
    SET_GPR_U32(ctx, 31, 0x2B7BE8u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B7BE0u, 0x2B7BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7BE8u;
label_2b7be8:
    // 0x2b7be8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7BE8u;
    {
        const bool branch_taken_0x2b7be8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B7BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BE8u;
        // 0x2b7bec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7be8) {
            ctx->pc = 0x2B7C04u;
            goto label_2b7c04;
        }
    }
    ctx->pc = 0x2B7BF0u;
    // 0x2b7bf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7bf4: 0x0  nop
    ctx->pc = 0x2b7bf4u;
    // NOP
    // 0x2b7bf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b7bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b7bfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7BFCu;
    {
        const bool branch_taken_0x2b7bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7bfc) {
            ctx->pc = 0x2B7C1Cu;
            goto label_2b7c1c;
        }
    }
    ctx->pc = 0x2B7C04u;
label_2b7c04:
    // 0x2b7c04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b7c08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b7c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b7c0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7c10: 0x0  nop
    ctx->pc = 0x2b7c10u;
    // NOP
    // 0x2b7c14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b7c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b7c18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b7c18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b7c1c:
    // 0x2b7c1c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b7c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b7c20: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b7c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b7c24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7c28: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b7c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b7c2c: 0x8e0258f8  lw          $v0, 0x58F8($s0)
    ctx->pc = 0x2b7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b7c30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7c34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7c34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7c38: 0xe6015900  swc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b7c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22784), bits); }
    // 0x2b7c3c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7C3Cu;
    {
        const bool branch_taken_0x2b7c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C3Cu;
        // 0x2b7c40: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c3c) {
            ctx->pc = 0x2B7C58u;
            goto label_2b7c58;
        }
    }
    ctx->pc = 0x2B7C44u;
    // 0x2b7c44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b7c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7c4c: 0xae0258f8  sw          $v0, 0x58F8($s0)
    ctx->pc = 0x2b7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 2));
    // 0x2b7c50: 0xae03591c  sw          $v1, 0x591C($s0)
    ctx->pc = 0x2b7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 3));
    // 0x2b7c54: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2b7c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b7c58:
    // 0x2b7c58: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b7c5c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2B7C5Cu;
    {
        const bool branch_taken_0x2b7c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C5Cu;
        // 0x2b7c60: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c5c) {
            ctx->pc = 0x2B7D94u;
            goto label_2b7d94;
        }
    }
    ctx->pc = 0x2B7C64u;
label_2b7c64:
    // 0x2b7c64: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x2b7c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x2b7c68: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b7c6c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b7c6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c70: 0x2442ac80  addiu       $v0, $v0, -0x5380
    ctx->pc = 0x2b7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
    // 0x2b7c74: 0x8c4458f8  lw          $a0, 0x58F8($v0)
    ctx->pc = 0x2b7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x520578u));
    // 0x2b7c78: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7C78u;
    {
        const bool branch_taken_0x2b7c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C78u;
        // 0x2b7c7c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c78) {
            ctx->pc = 0x2B7C88u;
            goto label_2b7c88;
        }
    }
    ctx->pc = 0x2B7C80u;
    // 0x2b7c80: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7C80u;
    {
        const bool branch_taken_0x2b7c80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b7c80) {
            ctx->pc = 0x2B7C9Cu;
            goto label_2b7c9c;
        }
    }
    ctx->pc = 0x2B7C88u;
label_2b7c88:
    // 0x2b7c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c8c: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B7C8Cu;
    SET_GPR_U32(ctx, 31, 0x2B7C94u);
    ctx->pc = 0x2B7C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C8Cu;
    // 0x2b7c90: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B7C8Cu, 0x2B7C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C94u;
label_2b7c94:
    // 0x2b7c94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B7C94u;
    {
        const bool branch_taken_0x2b7c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C94u;
        // 0x2b7c98: 0x222980b  movn        $s3, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c94) {
            ctx->pc = 0x2B7CD8u;
            goto label_2b7cd8;
        }
    }
    ctx->pc = 0x2B7C9Cu;
label_2b7c9c:
    // 0x2b7c9c: 0x1491000b  bne         $a0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B7C9Cu;
    {
        const bool branch_taken_0x2b7c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C9Cu;
        // 0x2b7ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c9c) {
            ctx->pc = 0x2B7CCCu;
            goto label_2b7ccc;
        }
    }
    ctx->pc = 0x2B7CA4u;
    // 0x2b7ca4: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B7CA4u;
    SET_GPR_U32(ctx, 31, 0x2B7CACu);
    ctx->pc = 0x2B7CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7CA4u;
    // 0x2b7ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B7CA4u, 0x2B7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CACu;
label_2b7cac:
    // 0x2b7cac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7CACu;
    {
        const bool branch_taken_0x2b7cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CACu;
        // 0x2b7cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cac) {
            ctx->pc = 0x2B7CBCu;
            goto label_2b7cbc;
        }
    }
    ctx->pc = 0x2B7CB4u;
    // 0x2b7cb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7CB4u;
    {
        const bool branch_taken_0x2b7cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CB4u;
        // 0x2b7cb8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cb4) {
            ctx->pc = 0x2B7CD8u;
            goto label_2b7cd8;
        }
    }
    ctx->pc = 0x2B7CBCu;
label_2b7cbc:
    // 0x2b7cbc: 0xc0ad684  jal         func_2B5A10
    ctx->pc = 0x2B7CBCu;
    SET_GPR_U32(ctx, 31, 0x2B7CC4u);
    ctx->pc = 0x2B7CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7CBCu;
    // 0x2b7cc0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5A10u, 0x2B7CBCu, 0x2B7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CC4u;
label_2b7cc4:
    // 0x2b7cc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7CC4u;
    {
        const bool branch_taken_0x2b7cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CC4u;
        // 0x2b7cc8: 0x222a00b  movn        $s4, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cc4) {
            ctx->pc = 0x2B7CD8u;
            goto label_2b7cd8;
        }
    }
    ctx->pc = 0x2B7CCCu;
label_2b7ccc:
    // 0x2b7ccc: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B7CCCu;
    SET_GPR_U32(ctx, 31, 0x2B7CD4u);
    ctx->pc = 0x2B7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7CCCu;
    // 0x2b7cd0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B7CCCu, 0x2B7CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CD4u;
label_2b7cd4:
    // 0x2b7cd4: 0x222900b  movn        $s2, $s1, $v0
    ctx->pc = 0x2b7cd4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 17));
label_2b7cd8:
    // 0x2b7cd8: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2B7CD8u;
    {
        const bool branch_taken_0x2b7cd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CD8u;
        // 0x2b7cdc: 0x26a2ac80  addiu       $v0, $s5, -0x5380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cd8) {
            ctx->pc = 0x2B7D0Cu;
            goto label_2b7d0c;
        }
    }
    ctx->pc = 0x2B7CE0u;
    // 0x2b7ce0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7ce4: 0x8c4358f8  lw          $v1, 0x58F8($v0)
    ctx->pc = 0x2b7ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22776)));
    // 0x2b7ce8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7CE8u;
    {
        const bool branch_taken_0x2b7ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CE8u;
        // 0x2b7cec: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ce8) {
            ctx->pc = 0x2B7D00u;
            goto label_2b7d00;
        }
    }
    ctx->pc = 0x2B7CF0u;
    // 0x2b7cf0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2b7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b7cf4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2b7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b7cf8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2B7CF8u;
    {
        const bool branch_taken_0x2b7cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CF8u;
        // 0x2b7cfc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cf8) {
            ctx->pc = 0x2B7D94u;
            goto label_2b7d94;
        }
    }
    ctx->pc = 0x2B7D00u;
label_2b7d00:
    // 0x2b7d00: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b7d04: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2B7D04u;
    {
        const bool branch_taken_0x2b7d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D04u;
        // 0x2b7d08: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d04) {
            ctx->pc = 0x2B7D94u;
            goto label_2b7d94;
        }
    }
    ctx->pc = 0x2B7D0Cu;
label_2b7d0c:
    // 0x2b7d0c: 0x1280001a  beqz        $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B7D0Cu;
    {
        const bool branch_taken_0x2b7d0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7d0c) {
            ctx->pc = 0x2B7D78u;
            goto label_2b7d78;
        }
    }
    ctx->pc = 0x2B7D14u;
    // 0x2b7d14: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B7D14u;
    SET_GPR_U32(ctx, 31, 0x2B7D1Cu);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B7D14u, 0x2B7D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D1Cu;
label_2b7d1c:
    // 0x2b7d1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7D1Cu;
    {
        const bool branch_taken_0x2b7d1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D1Cu;
        // 0x2b7d20: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d1c) {
            ctx->pc = 0x2B7D38u;
            goto label_2b7d38;
        }
    }
    ctx->pc = 0x2B7D24u;
    // 0x2b7d24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7d28: 0x0  nop
    ctx->pc = 0x2b7d28u;
    // NOP
    // 0x2b7d2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b7d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b7d30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7D30u;
    {
        const bool branch_taken_0x2b7d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7d30) {
            ctx->pc = 0x2B7D50u;
            goto label_2b7d50;
        }
    }
    ctx->pc = 0x2B7D38u;
label_2b7d38:
    // 0x2b7d38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b7d3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b7d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b7d40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7d44: 0x0  nop
    ctx->pc = 0x2b7d44u;
    // NOP
    // 0x2b7d48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b7d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b7d4c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b7d4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b7d50:
    // 0x2b7d50: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b7d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b7d54: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b7d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b7d58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7d5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7d60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b7d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b7d64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7d68: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7d68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7d6c: 0xe6015900  swc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b7d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22784), bits); }
    // 0x2b7d70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7D70u;
    {
        const bool branch_taken_0x2b7d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D70u;
        // 0x2b7d74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d70) {
            ctx->pc = 0x2B7D98u;
            goto label_2b7d98;
        }
    }
    ctx->pc = 0x2B7D78u;
label_2b7d78:
    // 0x2b7d78: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7D78u;
    {
        const bool branch_taken_0x2b7d78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D78u;
        // 0x2b7d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d78) {
            ctx->pc = 0x2B7D94u;
            goto label_2b7d94;
        }
    }
    ctx->pc = 0x2B7D80u;
    // 0x2b7d80: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B7D80u;
    SET_GPR_U32(ctx, 31, 0x2B7D88u);
    ctx->pc = 0x2B7D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D80u;
    // 0x2b7d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B7D80u, 0x2B7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D88u;
label_2b7d88:
    // 0x2b7d88: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x2b7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2b7d8c: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2b7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2b7d90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b7d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b7d94:
    // 0x2b7d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b7d98:
    // 0x2b7d98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b7d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7d9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b7d9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7da0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b7da0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7da4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b7da4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7da8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2b7da8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b7dac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b7dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7db0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DB0u;
        // 0x2b7db4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7DB8u;
}
