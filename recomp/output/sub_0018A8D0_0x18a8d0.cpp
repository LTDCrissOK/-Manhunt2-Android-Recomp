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

// Function: sub_0018A8D0
// Address: 0x18a8d0 - 0x18a9a0
void sub_0018A8D0_0x18a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A8D0_0x18a8d0");
#endif

    switch (ctx->pc) {
        case 0x18a8d0u: goto label_18a8d0;
        case 0x18a8d4u: goto label_18a8d4;
        case 0x18a8d8u: goto label_18a8d8;
        case 0x18a8dcu: goto label_18a8dc;
        case 0x18a8e0u: goto label_18a8e0;
        case 0x18a8e4u: goto label_18a8e4;
        case 0x18a8e8u: goto label_18a8e8;
        case 0x18a8ecu: goto label_18a8ec;
        case 0x18a8f0u: goto label_18a8f0;
        case 0x18a8f4u: goto label_18a8f4;
        case 0x18a8f8u: goto label_18a8f8;
        case 0x18a8fcu: goto label_18a8fc;
        case 0x18a900u: goto label_18a900;
        case 0x18a904u: goto label_18a904;
        case 0x18a908u: goto label_18a908;
        case 0x18a90cu: goto label_18a90c;
        case 0x18a910u: goto label_18a910;
        case 0x18a914u: goto label_18a914;
        case 0x18a918u: goto label_18a918;
        case 0x18a91cu: goto label_18a91c;
        case 0x18a920u: goto label_18a920;
        case 0x18a924u: goto label_18a924;
        case 0x18a928u: goto label_18a928;
        case 0x18a92cu: goto label_18a92c;
        case 0x18a930u: goto label_18a930;
        case 0x18a934u: goto label_18a934;
        case 0x18a938u: goto label_18a938;
        case 0x18a93cu: goto label_18a93c;
        case 0x18a940u: goto label_18a940;
        case 0x18a944u: goto label_18a944;
        case 0x18a948u: goto label_18a948;
        case 0x18a94cu: goto label_18a94c;
        case 0x18a950u: goto label_18a950;
        case 0x18a954u: goto label_18a954;
        case 0x18a958u: goto label_18a958;
        case 0x18a95cu: goto label_18a95c;
        case 0x18a960u: goto label_18a960;
        case 0x18a964u: goto label_18a964;
        case 0x18a968u: goto label_18a968;
        case 0x18a96cu: goto label_18a96c;
        case 0x18a970u: goto label_18a970;
        case 0x18a974u: goto label_18a974;
        case 0x18a978u: goto label_18a978;
        case 0x18a97cu: goto label_18a97c;
        case 0x18a980u: goto label_18a980;
        case 0x18a984u: goto label_18a984;
        case 0x18a988u: goto label_18a988;
        case 0x18a98cu: goto label_18a98c;
        case 0x18a990u: goto label_18a990;
        case 0x18a994u: goto label_18a994;
        case 0x18a998u: goto label_18a998;
        case 0x18a99cu: goto label_18a99c;
        default: break;
    }

    ctx->pc = 0x18a8d0u;

label_18a8d0:
    // 0x18a8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18a8d4:
    // 0x18a8d4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18a8d8:
    // 0x18a8d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18a8dc:
    // 0x18a8dc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x18a8dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_18a8e0:
    // 0x18a8e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a8e4:
    // 0x18a8e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18a8e8:
    // 0x18a8e8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18a8ec:
    // 0x18a8ec: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
label_18a8f0:
    if (ctx->pc == 0x18A8F0u) {
        ctx->pc = 0x18A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8ECu;
        // 0x18a8f0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A8F4u;
        goto label_18a8f4;
    }
    ctx->pc = 0x18A8ECu;
    {
        const bool branch_taken_0x18a8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8ECu;
        // 0x18a8f0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8ec) {
            ctx->pc = 0x18A988u;
            goto label_18a988;
        }
    }
    ctx->pc = 0x18A8F4u;
label_18a8f4:
    // 0x18a8f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18a8f8:
    // 0x18a8f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18a8fc:
    if (ctx->pc == 0x18A8FCu) {
        ctx->pc = 0x18A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8F8u;
        // 0x18a8fc: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A900u;
        goto label_18a900;
    }
    ctx->pc = 0x18A8F8u;
    {
        const bool branch_taken_0x18a8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8F8u;
        // 0x18a8fc: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8f8) {
            ctx->pc = 0x18A910u;
            goto label_18a910;
        }
    }
    ctx->pc = 0x18A900u;
label_18a900:
    // 0x18a900: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18a904:
    // 0x18a904: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18a908:
    // 0x18a908: 0x40f809  jalr        $v0
label_18a90c:
    if (ctx->pc == 0x18A90Cu) {
        ctx->pc = 0x18A910u;
        goto label_18a910;
    }
    ctx->pc = 0x18A908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A910u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A908u, 0x18A910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A910u;
label_18a910:
    // 0x18a910: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18a910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_18a914:
    // 0x18a914: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_18a918:
    // 0x18a918: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18a91c:
    // 0x18a91c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18a920:
    if (ctx->pc == 0x18A920u) {
        ctx->pc = 0x18A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A91Cu;
        // 0x18a920: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A924u;
        goto label_18a924;
    }
    ctx->pc = 0x18A91Cu;
    {
        const bool branch_taken_0x18a91c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A91Cu;
        // 0x18a920: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a91c) {
            ctx->pc = 0x18A938u;
            goto label_18a938;
        }
    }
    ctx->pc = 0x18A924u;
label_18a924:
    // 0x18a924: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18a924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a928:
    // 0x18a928: 0x0  nop
    ctx->pc = 0x18a928u;
    // NOP
label_18a92c:
    // 0x18a92c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18a92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18a930:
    // 0x18a930: 0x10000007  b           . + 4 + (0x7 << 2)
label_18a934:
    if (ctx->pc == 0x18A934u) {
        ctx->pc = 0x18A938u;
        goto label_18a938;
    }
    ctx->pc = 0x18A930u;
    {
        const bool branch_taken_0x18a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a930) {
            ctx->pc = 0x18A950u;
            goto label_18a950;
        }
    }
    ctx->pc = 0x18A938u;
label_18a938:
    // 0x18a938: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18a938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18a93c:
    // 0x18a93c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18a940:
    // 0x18a940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18a940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a944:
    // 0x18a944: 0x0  nop
    ctx->pc = 0x18a944u;
    // NOP
label_18a948:
    // 0x18a948: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18a948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18a94c:
    // 0x18a94c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18a94cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18a950:
    // 0x18a950: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18a950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18a954:
    // 0x18a954: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18a954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18a958:
    // 0x18a958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a95c:
    // 0x18a95c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18a95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18a960:
    // 0x18a960: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18a960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18a964:
    // 0x18a964: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x18a964u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_18a968:
    // 0x18a968: 0xc095510  jal         func_255440
label_18a96c:
    if (ctx->pc == 0x18A96Cu) {
        ctx->pc = 0x18A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A968u;
        // 0x18a96c: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A970u;
        goto label_18a970;
    }
    ctx->pc = 0x18A968u;
    SET_GPR_U32(ctx, 31, 0x18A970u);
    ctx->pc = 0x18A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A968u;
    // 0x18a96c: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x255440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255440u, 0x18A968u, 0x18A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A970u;
label_18a970:
    // 0x18a970: 0xc061a16  jal         func_186858
label_18a974:
    if (ctx->pc == 0x18A974u) {
        ctx->pc = 0x18A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A970u;
        // 0x18a974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A978u;
        goto label_18a978;
    }
    ctx->pc = 0x18A970u;
    SET_GPR_U32(ctx, 31, 0x18A978u);
    ctx->pc = 0x18A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A970u;
    // 0x18a974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18A970u, 0x18A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A978u;
label_18a978:
    // 0x18a978: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x18a978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_18a97c:
    // 0x18a97c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a980:
    // 0x18a980: 0x0  nop
    ctx->pc = 0x18a980u;
    // NOP
label_18a984:
    // 0x18a984: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x18a984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_18a988:
    // 0x18a988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a98c:
    // 0x18a98c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18a98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18a990:
    // 0x18a990: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x18a990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18a994:
    // 0x18a994: 0x3e00008  jr          $ra
label_18a998:
    if (ctx->pc == 0x18A998u) {
        ctx->pc = 0x18A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A994u;
        // 0x18a998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A99Cu;
        goto label_18a99c;
    }
    ctx->pc = 0x18A994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A994u;
        // 0x18a998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A99Cu;
label_18a99c:
    // 0x18a99c: 0x0  nop
    ctx->pc = 0x18a99cu;
    // NOP
    ctx->pc = 0x18a9a0u;
}
