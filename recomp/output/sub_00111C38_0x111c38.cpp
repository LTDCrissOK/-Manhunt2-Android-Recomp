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

// Function: sub_00111C38
// Address: 0x111c38 - 0x111da8
void sub_00111C38_0x111c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111C38_0x111c38");
#endif

    switch (ctx->pc) {
        case 0x111c9cu: goto label_111c9c;
        case 0x111cd8u: goto label_111cd8;
        case 0x111ce8u: goto label_111ce8;
        case 0x111d70u: goto label_111d70;
        case 0x111d90u: goto label_111d90;
        default: break;
    }

    ctx->pc = 0x111c38u;

    // 0x111c38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111c3c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x111c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x111c40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x111c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x111c44: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x111c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x111c48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x111c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x111c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x111c54: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x111c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x111c58: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x111c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x111c5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111c60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111c64: 0x8c710108  lw          $s1, 0x108($v1)
    ctx->pc = 0x111c64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x111c68: 0x5220004a  beql        $s1, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x111C68u;
    {
        const bool branch_taken_0x111c68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c68) {
            ctx->pc = 0x111C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111C68u;
            // 0x111c6c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111D94u;
            goto label_111d94;
        }
    }
    ctx->pc = 0x111C70u;
    // 0x111c70: 0x8e23107c  lw          $v1, 0x107C($s1)
    ctx->pc = 0x111c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4220)));
    // 0x111c74: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x111c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x111c78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111C78u;
    {
        const bool branch_taken_0x111c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C78u;
        // 0x111c7c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c78) {
            ctx->pc = 0x111C88u;
            goto label_111c88;
        }
    }
    ctx->pc = 0x111C80u;
    // 0x111c80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x111C80u;
    {
        const bool branch_taken_0x111c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111c80) {
            ctx->pc = 0x111C94u;
            goto label_111c94;
        }
    }
    ctx->pc = 0x111C88u;
label_111c88:
    // 0x111c88: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x111c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x111c8c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x111C8Cu;
    {
        const bool branch_taken_0x111c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C8Cu;
        // 0x111c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c8c) {
            ctx->pc = 0x111CD0u;
            goto label_111cd0;
        }
    }
    ctx->pc = 0x111C94u;
label_111c94:
    // 0x111c94: 0xc045298  jal         func_114A60
    ctx->pc = 0x111C94u;
    SET_GPR_U32(ctx, 31, 0x111C9Cu);
    ctx->pc = 0x111C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C94u;
    // 0x111c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A60u, 0x111C94u, 0x111C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C9Cu;
label_111c9c:
    // 0x111c9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x111C9Cu;
    {
        const bool branch_taken_0x111c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C9Cu;
        // 0x111ca0: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c9c) {
            ctx->pc = 0x111CB0u;
            goto label_111cb0;
        }
    }
    ctx->pc = 0x111CA4u;
    // 0x111ca4: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x111ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x111ca8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x111CA8u;
    {
        const bool branch_taken_0x111ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CA8u;
        // 0x111cac: 0xae00021c  sw          $zero, 0x21C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ca8) {
            ctx->pc = 0x111D90u;
            goto label_111d90;
        }
    }
    ctx->pc = 0x111CB0u;
label_111cb0:
    // 0x111cb0: 0x8e03021c  lw          $v1, 0x21C($s0)
    ctx->pc = 0x111cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x111cb4: 0x8e42a9d4  lw          $v0, -0x562C($s2)
    ctx->pc = 0x111cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945236)));
    // 0x111cb8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x111cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x111cbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111CBCu;
    {
        const bool branch_taken_0x111cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111cbc) {
            ctx->pc = 0x111CE0u;
            goto label_111ce0;
        }
    }
    ctx->pc = 0x111CC4u;
    // 0x111cc4: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x111cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x111cc8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x111CC8u;
    {
        const bool branch_taken_0x111cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CC8u;
        // 0x111ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cc8) {
            ctx->pc = 0x111D90u;
            goto label_111d90;
        }
    }
    ctx->pc = 0x111CD0u;
label_111cd0:
    // 0x111cd0: 0xc095514  jal         func_255450
    ctx->pc = 0x111CD0u;
    SET_GPR_U32(ctx, 31, 0x111CD8u);
    ctx->pc = 0x111CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CD0u;
    // 0x111cd4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255450u, 0x111CD0u, 0x111CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CD8u;
label_111cd8:
    // 0x111cd8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x111CD8u;
    {
        const bool branch_taken_0x111cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CD8u;
        // 0x111cdc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cd8) {
            ctx->pc = 0x111D94u;
            goto label_111d94;
        }
    }
    ctx->pc = 0x111CE0u;
label_111ce0:
    // 0x111ce0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x111CE0u;
    SET_GPR_U32(ctx, 31, 0x111CE8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x111CE0u, 0x111CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CE8u;
label_111ce8:
    // 0x111ce8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x111ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x111cec: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x111cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x111cf0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x111cf0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x111cf4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x111CF4u;
    {
        const bool branch_taken_0x111cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x111cf4) {
            ctx->pc = 0x111CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111CF4u;
            // 0x111cf8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x111CFCu;
            goto label_111cfc;
        }
    }
    ctx->pc = 0x111CFCu;
label_111cfc:
    // 0x111cfc: 0x8e42a9d4  lw          $v0, -0x562C($s2)
    ctx->pc = 0x111cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945236)));
    // 0x111d00: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x111d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x111d04: 0x2010  mfhi        $a0
    ctx->pc = 0x111d04u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x111d08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111d0c: 0xae04021c  sw          $a0, 0x21C($s0)
    ctx->pc = 0x111d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 4));
    // 0x111d10: 0x8ca2bd48  lw          $v0, -0x42B8($a1)
    ctx->pc = 0x111d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950216)));
    // 0x111d14: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x111d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x111d18: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x111d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x111d1c: 0x50a0001c  beql        $a1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x111D1Cu;
    {
        const bool branch_taken_0x111d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x111d1c) {
            ctx->pc = 0x111D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111D1Cu;
            // 0x111d20: 0xae000220  sw          $zero, 0x220($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111D90u;
            goto label_111d90;
        }
    }
    ctx->pc = 0x111D24u;
    // 0x111d24: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x111d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x111d28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x111d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111d2c: 0x24470070  addiu       $a3, $v0, 0x70
    ctx->pc = 0x111d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x111d30: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x111D30u;
    {
        const bool branch_taken_0x111d30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D30u;
        // 0x111d34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d30) {
            ctx->pc = 0x111D78u;
            goto label_111d78;
        }
    }
    ctx->pc = 0x111D38u;
    // 0x111d38: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x111d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111d3c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x111d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x111d40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111d44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x111d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111d48: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x111d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x111d4c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x111d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111d50: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x111d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x111d54: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x111d54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x111d58: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x111d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111d5c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x111d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x111d60: 0xc4e2000c  lwc1        $f2, 0xC($a3)
    ctx->pc = 0x111d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x111d64: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x111d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x111d68: 0xc041032  jal         func_1040C8
    ctx->pc = 0x111D68u;
    SET_GPR_U32(ctx, 31, 0x111D70u);
    ctx->pc = 0x111D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D68u;
    // 0x111d6c: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x111D68u, 0x111D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D70u;
label_111d70:
    // 0x111d70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111D70u;
    {
        const bool branch_taken_0x111d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D70u;
        // 0x111d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d70) {
            ctx->pc = 0x111D80u;
            goto label_111d80;
        }
    }
    ctx->pc = 0x111D78u;
label_111d78:
    // 0x111d78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x111D78u;
    {
        const bool branch_taken_0x111d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D78u;
        // 0x111d7c: 0xae000220  sw          $zero, 0x220($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d78) {
            ctx->pc = 0x111D90u;
            goto label_111d90;
        }
    }
    ctx->pc = 0x111D80u;
label_111d80:
    // 0x111d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d84: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x111d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
    // 0x111d88: 0xc095514  jal         func_255450
    ctx->pc = 0x111D88u;
    SET_GPR_U32(ctx, 31, 0x111D90u);
    ctx->pc = 0x111D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D88u;
    // 0x111d8c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255450u, 0x111D88u, 0x111D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D90u;
label_111d90:
    // 0x111d90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_111d94:
    // 0x111d94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x111d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x111d98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111d9c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x111d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x111da0: 0x3e00008  jr          $ra
    ctx->pc = 0x111DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DA0u;
        // 0x111da4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111DA8u;
}
