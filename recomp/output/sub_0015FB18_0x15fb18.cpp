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

// Function: sub_0015FB18
// Address: 0x15fb18 - 0x15fe20
void sub_0015FB18_0x15fb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FB18_0x15fb18");
#endif

    switch (ctx->pc) {
        case 0x15fb80u: goto label_15fb80;
        case 0x15fc14u: goto label_15fc14;
        case 0x15fc1cu: goto label_15fc1c;
        case 0x15fcb8u: goto label_15fcb8;
        case 0x15fcdcu: goto label_15fcdc;
        case 0x15fdb8u: goto label_15fdb8;
        default: break;
    }

    ctx->pc = 0x15fb18u;

    // 0x15fb18: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x15fb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x15fb1c: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x15fb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x15fb20: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x15fb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x15fb24: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x15fb24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb28: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x15fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x15fb2c: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x15fb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x15fb30: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x15fb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x15fb34: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x15fb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x15fb38: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x15fb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x15fb3c: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x15fb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x15fb40: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x15fb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x15fb44: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x15fb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x15fb48: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x15fb48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x15fb4c: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x15fb4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x15fb50: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x15fb50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x15fb54: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x15fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x15fb58: 0x93c20009  lbu         $v0, 0x9($fp)
    ctx->pc = 0x15fb58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 9)));
    // 0x15fb5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FB5Cu;
    {
        const bool branch_taken_0x15fb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB5Cu;
        // 0x15fb60: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb5c) {
            ctx->pc = 0x15FB6Cu;
            goto label_15fb6c;
        }
    }
    ctx->pc = 0x15FB64u;
    // 0x15fb64: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x15FB64u;
    {
        const bool branch_taken_0x15fb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB64u;
        // 0x15fb68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb64) {
            ctx->pc = 0x15FDE4u;
            goto label_15fde4;
        }
    }
    ctx->pc = 0x15FB6Cu;
label_15fb6c:
    // 0x15fb6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15fb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15fb70: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x15fb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x15fb74: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x15fb74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb78: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x15fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x15fb7c: 0x0  nop
    ctx->pc = 0x15fb7cu;
    // NOP
label_15fb80:
    // 0x15fb80: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x15fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x15fb84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fb88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fb8c: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x15FB8Cu;
    {
        const bool branch_taken_0x15fb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB8Cu;
        // 0x15fb90: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb8c) {
            ctx->pc = 0x15FDC0u;
            goto label_15fdc0;
        }
    }
    ctx->pc = 0x15FB94u;
    // 0x15fb94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15fb98: 0x24459a08  addiu       $a1, $v0, -0x65F8
    ctx->pc = 0x15fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15fb9c: 0x26e40001  addiu       $a0, $s7, 0x1
    ctx->pc = 0x15fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x15fba0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15fba4: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x15fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x15fba8: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x15FBA8u;
    {
        const bool branch_taken_0x15fba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBA8u;
        // 0x15fbac: 0x309700ff  andi        $s7, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fba8) {
            ctx->pc = 0x15FDC0u;
            goto label_15fdc0;
        }
    }
    ctx->pc = 0x15FBB0u;
    // 0x15fbb0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15fbb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15fbb8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15fbbc: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x15fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x15fbc0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FBC0u;
    {
        const bool branch_taken_0x15fbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fbc0) {
            ctx->pc = 0x15FBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FBC0u;
            // 0x15fbc4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FBD0u;
            goto label_15fbd0;
        }
    }
    ctx->pc = 0x15FBC8u;
    // 0x15fbc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15FBC8u;
    {
        const bool branch_taken_0x15fbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBC8u;
        // 0x15fbcc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fbc8) {
            ctx->pc = 0x15FBD8u;
            goto label_15fbd8;
        }
    }
    ctx->pc = 0x15FBD0u;
label_15fbd0:
    // 0x15fbd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fbd4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15fbd8:
    // 0x15fbd8: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x15FBD8u;
    {
        const bool branch_taken_0x15fbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBD8u;
        // 0x15fbdc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fbd8) {
            ctx->pc = 0x15FDC0u;
            goto label_15fdc0;
        }
    }
    ctx->pc = 0x15FBE0u;
    // 0x15fbe0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15fbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fbe4: 0xc442c6a4  lwc1        $f2, -0x395C($v0)
    ctx->pc = 0x15fbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fbe8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15fbec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15fbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15fbf0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fbf4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15fbf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15fbf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15fbf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15fbfc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x15fbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fc00: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x15fc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15fc04: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x15fc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fc08: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15fc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15fc0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x15FC0Cu;
    SET_GPR_U32(ctx, 31, 0x15FC14u);
    ctx->pc = 0x15FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FC0Cu;
    // 0x15fc10: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15FC0Cu, 0x15FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC14u;
label_15fc14:
    // 0x15fc14: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x15FC14u;
    SET_GPR_U32(ctx, 31, 0x15FC1Cu);
    ctx->pc = 0x15FC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FC14u;
    // 0x15fc18: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15FC14u, 0x15FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC1Cu;
label_15fc1c:
    // 0x15fc1c: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x15fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x15fc20: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x15fc20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15fc24: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x15fc24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fc28: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x15fc28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fc2c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x15fc2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15fc30: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x15fc30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15fc34: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x15fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x15fc38: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x15fc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x15fc3c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x15fc3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15fc40: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x15fc40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15fc44: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x15fc44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15fc48: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x15fc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15fc4c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x15fc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fc50: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x15fc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15fc54: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x15fc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15fc58: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15fc58u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15fc5c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15fc5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15fc60: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x15fc60u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15fc64: 0x0  nop
    ctx->pc = 0x15fc64u;
    // NOP
    // 0x15fc68: 0x0  nop
    ctx->pc = 0x15fc68u;
    // NOP
    // 0x15fc6c: 0x46000044  c1          0x44
    ctx->pc = 0x15fc6cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x15fc70: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15fc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15fc74: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x15fc74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15fc78: 0x0  nop
    ctx->pc = 0x15fc78u;
    // NOP
    // 0x15fc7c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x15fc7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15fc80: 0x0  nop
    ctx->pc = 0x15fc80u;
    // NOP
    // 0x15fc84: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x15FC84u;
    {
        const bool branch_taken_0x15fc84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC84u;
        // 0x15fc88: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc84) {
            ctx->pc = 0x15FCACu;
            goto label_15fcac;
        }
    }
    ctx->pc = 0x15FC8Cu;
    // 0x15fc8c: 0x0  nop
    ctx->pc = 0x15fc8cu;
    // NOP
    // 0x15fc90: 0x0  nop
    ctx->pc = 0x15fc90u;
    // NOP
    // 0x15fc94: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x15fc94u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
    // 0x15fc98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15fc98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15fc9c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x15fc9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15fca0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15fca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15fca4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15fca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15fca8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x15fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_15fcac:
    // 0x15fcac: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x15fcacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15fcb0: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x15FCB0u;
    SET_GPR_U32(ctx, 31, 0x15FCB8u);
    ctx->pc = 0x15FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FCB0u;
    // 0x15fcb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x15FCB0u, 0x15FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FCB8u;
label_15fcb8:
    // 0x15fcb8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x15fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x15fcbc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x15fcbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15fcc0: 0xc454eee0  lwc1        $f20, -0x1120($v0)
    ctx->pc = 0x15fcc0u;
    { uint32_t bits = FAST_READ32(0x43EEE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15fcc4: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x15fcc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15fcc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15fcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15fcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcd0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15fcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcd4: 0xc077824  jal         func_1DE090
    ctx->pc = 0x15FCD4u;
    SET_GPR_U32(ctx, 31, 0x15FCDCu);
    ctx->pc = 0x15FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FCD4u;
    // 0x15fcd8: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x15FCD4u, 0x15FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FCDCu;
label_15fcdc:
    // 0x15fcdc: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x15FCDCu;
    {
        const bool branch_taken_0x15fcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCDCu;
        // 0x15fce0: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fcdc) {
            ctx->pc = 0x15FDC4u;
            goto label_15fdc4;
        }
    }
    ctx->pc = 0x15FCE4u;
    // 0x15fce4: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x15fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x15fce8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x15fce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fcec: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x15fcecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15fcf0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x15fcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x15fcf4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x15fcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x15fcf8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x15fcf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15fcfc: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x15fcfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15fd00: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x15fd00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15fd04: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x15fd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15fd08: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x15fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fd0c: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x15fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15fd10: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x15fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15fd14: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15fd14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15fd18: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15fd18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15fd1c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x15fd1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15fd20: 0x0  nop
    ctx->pc = 0x15fd20u;
    // NOP
    // 0x15fd24: 0x0  nop
    ctx->pc = 0x15fd24u;
    // NOP
    // 0x15fd28: 0x46000044  c1          0x44
    ctx->pc = 0x15fd28u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x15fd2c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15fd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15fd30: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x15fd30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15fd34: 0x0  nop
    ctx->pc = 0x15fd34u;
    // NOP
    // 0x15fd38: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x15FD38u;
    {
        const bool branch_taken_0x15fd38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD38u;
        // 0x15fd3c: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd38) {
            ctx->pc = 0x15FD60u;
            goto label_15fd60;
        }
    }
    ctx->pc = 0x15FD40u;
    // 0x15fd40: 0x0  nop
    ctx->pc = 0x15fd40u;
    // NOP
    // 0x15fd44: 0x0  nop
    ctx->pc = 0x15fd44u;
    // NOP
    // 0x15fd48: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x15fd48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
    // 0x15fd4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15fd4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15fd50: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x15fd50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15fd54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15fd54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15fd58: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15fd58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15fd5c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x15fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_15fd60:
    // 0x15fd60: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x15fd60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x15fd64: 0x7fa00070  sq          $zero, 0x70($sp)
    ctx->pc = 0x15fd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 0));
    // 0x15fd68: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x15fd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x15fd6c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x15fd6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x15fd70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15fd74: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x15fd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x15fd78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15fd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd7c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x15fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x15fd80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15fd80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd84: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x15fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x15fd88: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15fd88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd8c: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x15fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x15fd90: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x15fd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x15fd94: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x15fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x15fd98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15fd98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd9c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x15fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x15fda0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x15fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x15fda4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x15fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x15fda8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x15fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x15fdac: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x15fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x15fdb0: 0xc077dac  jal         func_1DF6B0
    ctx->pc = 0x15FDB0u;
    SET_GPR_U32(ctx, 31, 0x15FDB8u);
    ctx->pc = 0x15FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FDB0u;
    // 0x15fdb4: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF6B0u, 0x15FDB0u, 0x15FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDB8u;
label_15fdb8:
    // 0x15fdb8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15FDB8u;
    {
        const bool branch_taken_0x15fdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDB8u;
        // 0x15fdbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fdb8) {
            ctx->pc = 0x15FDE4u;
            goto label_15fde4;
        }
    }
    ctx->pc = 0x15FDC0u;
label_15fdc0:
    // 0x15fdc0: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x15fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_15fdc4:
    // 0x15fdc4: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x15fdc4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15fdc8: 0x2ec30010  sltiu       $v1, $s6, 0x10
    ctx->pc = 0x15fdc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15fdcc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15FDCCu;
    {
        const bool branch_taken_0x15fdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDCCu;
        // 0x15fdd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fdcc) {
            ctx->pc = 0x15FDE4u;
            goto label_15fde4;
        }
    }
    ctx->pc = 0x15FDD4u;
    // 0x15fdd4: 0x93c20009  lbu         $v0, 0x9($fp)
    ctx->pc = 0x15fdd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 9)));
    // 0x15fdd8: 0x56e2ff69  bnel        $s7, $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x15FDD8u;
    {
        const bool branch_taken_0x15fdd8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x15fdd8) {
            ctx->pc = 0x15FDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FDD8u;
            // 0x15fddc: 0x8fc30004  lw          $v1, 0x4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fb80;
        }
    }
    ctx->pc = 0x15FDE0u;
    // 0x15fde0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15fde4:
    // 0x15fde4: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x15fde4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15fde8: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x15fde8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15fdec: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x15fdecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15fdf0: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x15fdf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x15fdf4: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x15fdf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15fdf8: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x15fdf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x15fdfc: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x15fdfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15fe00: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x15fe00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15fe04: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x15fe04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15fe08: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x15fe08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x15fe0c: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x15fe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15fe10: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x15fe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15fe14: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x15fe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15fe18: 0x3e00008  jr          $ra
    ctx->pc = 0x15FE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE18u;
        // 0x15fe1c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FE20u;
}
