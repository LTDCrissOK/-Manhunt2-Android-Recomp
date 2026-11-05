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

// Function: sub_0028FB30
// Address: 0x28fb30 - 0x28fc84
void sub_0028FB30_0x28fb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FB30_0x28fb30");
#endif

    switch (ctx->pc) {
        case 0x28fb60u: goto label_28fb60;
        case 0x28fbc4u: goto label_28fbc4;
        case 0x28fc48u: goto label_28fc48;
        default: break;
    }

    ctx->pc = 0x28fb30u;

    // 0x28fb30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28fb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28fb34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fb38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28fb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28fb3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28fb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28fb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28fb44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28fb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x28fb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x28fb4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28fb4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb50: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x28fb50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28fb54: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x28fb54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28fb58: 0xc0a52c0  jal         func_294B00
    ctx->pc = 0x28FB58u;
    SET_GPR_U32(ctx, 31, 0x28FB60u);
    ctx->pc = 0x28FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB58u;
    // 0x28fb5c: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B00u, 0x28FB58u, 0x28FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB60u;
label_28fb60:
    // 0x28fb60: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x28FB60u;
    {
        const bool branch_taken_0x28fb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB60u;
        // 0x28fb64: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb60) {
            ctx->pc = 0x28FC84u;
            return;
        }
    }
    ctx->pc = 0x28FB68u;
    // 0x28fb68: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x28fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x28fb6c: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x28fb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x28fb70: 0x8ca311c0  lw          $v1, 0x11C0($a1)
    ctx->pc = 0x28fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4544)));
    // 0x28fb74: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x28fb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x28fb78: 0x50640043  beql        $v1, $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x28FB78u;
    {
        const bool branch_taken_0x28fb78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x28fb78) {
            ctx->pc = 0x28FB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FB78u;
            // 0x28fb7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FC88u;
            return;
        }
    }
    ctx->pc = 0x28FB80u;
    // 0x28fb80: 0x8ca312bc  lw          $v1, 0x12BC($a1)
    ctx->pc = 0x28fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4796)));
    // 0x28fb84: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x28fb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x28fb88: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x28FB88u;
    {
        const bool branch_taken_0x28fb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB88u;
        // 0x28fb8c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb88) {
            ctx->pc = 0x28FC84u;
            return;
        }
    }
    ctx->pc = 0x28FB90u;
    // 0x28fb90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28fb94: 0x2442b370  addiu       $v0, $v0, -0x4C90
    ctx->pc = 0x28fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947696));
    // 0x28fb98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fb9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28fba0: 0x800008  jr          $a0
    ctx->pc = 0x28FBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28FBA8u: goto label_28fba8;
            case 0x28FBB0u: goto label_28fbb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FBA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28FBA8u;
label_28fba8:
    // 0x28fba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28FBA8u;
    {
        const bool branch_taken_0x28fba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBA8u;
        // 0x28fbac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fba8) {
            ctx->pc = 0x28FBB4u;
            goto label_28fbb4;
        }
    }
    ctx->pc = 0x28FBB0u;
label_28fbb0:
    // 0x28fbb0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28fbb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28fbb4:
    // 0x28fbb4: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FBB4u;
    {
        const bool branch_taken_0x28fbb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fbb4) {
            ctx->pc = 0x28FBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FBB4u;
            // 0x28fbb8: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FBCCu;
            goto label_28fbcc;
        }
    }
    ctx->pc = 0x28FBBCu;
    // 0x28fbbc: 0xc0bfc50  jal         func_2FF140
    ctx->pc = 0x28FBBCu;
    SET_GPR_U32(ctx, 31, 0x28FBC4u);
    ctx->pc = 0x28FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBBCu;
    // 0x28fbc0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF140u, 0x28FBBCu, 0x28FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBC4u;
label_28fbc4:
    // 0x28fbc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28fbc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbc8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x28fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28fbcc:
    // 0x28fbcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28fbd0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x28fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fbd4: 0xc442ac6c  lwc1        $f2, -0x5394($v0)
    ctx->pc = 0x28fbd4u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fbd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28fbd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28fbdc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x28fbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x28fbe0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28fbe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28fbe4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x28fbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x28fbe8: 0x3c013ce6  lui         $at, 0x3CE6
    ctx->pc = 0x28fbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15590 << 16));
    // 0x28fbec: 0x34216667  ori         $at, $at, 0x6667
    ctx->pc = 0x28fbecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26215);
    // 0x28fbf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28fbf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fbf4: 0x460f1582  mul.s       $f22, $f2, $f15
    ctx->pc = 0x28fbf4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x28fbf8: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x28fbf8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28fbfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28fbfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fc00: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28FC00u;
    {
        const bool branch_taken_0x28fc00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC00u;
        // 0x28fc04: 0xc6150010  lwc1        $f21, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc00) {
            ctx->pc = 0x28FC48u;
            goto label_28fc48;
        }
    }
    ctx->pc = 0x28FC08u;
    // 0x28fc08: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FC08u;
    {
        const bool branch_taken_0x28fc08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC08u;
        // 0x28fc0c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc08) {
            ctx->pc = 0x28FC1Cu;
            goto label_28fc1c;
        }
    }
    ctx->pc = 0x28FC10u;
    // 0x28fc10: 0x3c013d4b  lui         $at, 0x3D4B
    ctx->pc = 0x28fc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15691 << 16));
    // 0x28fc14: 0x3421923a  ori         $at, $at, 0x923A
    ctx->pc = 0x28fc14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37434);
    // 0x28fc18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fc18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28fc1c:
    // 0x28fc1c: 0x0  nop
    ctx->pc = 0x28fc1cu;
    // NOP
    // 0x28fc20: 0x4600ab41  sub.s       $f13, $f21, $f0
    ctx->pc = 0x28fc20u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x28fc24: 0x8c48f494  lw          $t0, -0xB6C($v0)
    ctx->pc = 0x28fc24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964372)));
    // 0x28fc28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28fc28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28fc2c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x28fc2cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x28fc30: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x28fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x28fc34: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x28fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x28fc38: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x28fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x28fc3c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28fc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28fc40: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28FC40u;
    SET_GPR_U32(ctx, 31, 0x28FC48u);
    ctx->pc = 0x28FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC40u;
    // 0x28fc44: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28FC40u, 0x28FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC48u;
label_28fc48:
    // 0x28fc48: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x28FC48u;
    {
        const bool branch_taken_0x28fc48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC48u;
        // 0x28fc4c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc48) {
            ctx->pc = 0x28FC84u;
            return;
        }
    }
    ctx->pc = 0x28FC50u;
    // 0x28fc50: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x28fc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x28fc54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28fc54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28fc58: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x28fc58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x28fc5c: 0x8c48f490  lw          $t0, -0xB70($v0)
    ctx->pc = 0x28fc5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964368)));
    // 0x28fc60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28fc60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28fc64: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x28fc64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x28fc68: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x28fc68u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x28fc6c: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x28fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x28fc70: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x28fc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x28fc74: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x28fc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x28fc78: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28fc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28fc7c: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28FC7Cu;
    SET_GPR_U32(ctx, 31, 0x28FC84u);
    ctx->pc = 0x28FC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC7Cu;
    // 0x28fc80: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28FC7Cu, 0x28FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC84u;
}
