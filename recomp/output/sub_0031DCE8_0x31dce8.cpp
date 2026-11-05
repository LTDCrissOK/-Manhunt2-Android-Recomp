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

// Function: sub_0031DCE8
// Address: 0x31dce8 - 0x31de80
void sub_0031DCE8_0x31dce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DCE8_0x31dce8");
#endif

    switch (ctx->pc) {
        case 0x31dd50u: goto label_31dd50;
        case 0x31dd80u: goto label_31dd80;
        case 0x31dd88u: goto label_31dd88;
        case 0x31dda8u: goto label_31dda8;
        case 0x31ddf0u: goto label_31ddf0;
        case 0x31de20u: goto label_31de20;
        case 0x31de28u: goto label_31de28;
        default: break;
    }

    ctx->pc = 0x31dce8u;

    // 0x31dce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31dce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31dcec: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x31dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x31dcf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31dcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31dcf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31dcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31dcf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31dcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31dcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31dd00: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x31dd00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31dd04: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x31dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x31dd08: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x31dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31dd0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31dd10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31dd14: 0x10640053  beq         $v1, $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x31DD14u;
    {
        const bool branch_taken_0x31dd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x31DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD14u;
        // 0x31dd18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd14) {
            ctx->pc = 0x31DE64u;
            goto label_31de64;
        }
    }
    ctx->pc = 0x31DD1Cu;
    // 0x31dd1c: 0x3c023cf3  lui         $v0, 0x3CF3
    ctx->pc = 0x31dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15603 << 16));
    // 0x31dd20: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x31dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31dd24: 0x3442cf3d  ori         $v0, $v0, 0xCF3D
    ctx->pc = 0x31dd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53053);
    // 0x31dd28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31dd28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd2c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x31dd2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31dd30: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x31dd30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31dd34: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x31dd34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x31dd38: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x31DD38u;
    {
        const bool branch_taken_0x31dd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD38u;
        // 0x31dd3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd38) {
            ctx->pc = 0x31DDA0u;
            goto label_31dda0;
        }
    }
    ctx->pc = 0x31DD40u;
    // 0x31dd40: 0x3c083cf3  lui         $t0, 0x3CF3
    ctx->pc = 0x31dd40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15603 << 16));
    // 0x31dd44: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x31dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x31dd48: 0x3508cf3d  ori         $t0, $t0, 0xCF3D
    ctx->pc = 0x31dd48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)53053);
    // 0x31dd4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31dd4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31dd50:
    // 0x31dd50: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x31dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x31dd54: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x31dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x31dd58: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x31dd58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31dd5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31dd60: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x31dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x31dd64: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x31dd64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31dd68: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x31dd68u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
    // 0x31dd6c: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x31dd6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x31dd70: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DD70u;
    {
        const bool branch_taken_0x31dd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD70u;
        // 0x31dd74: 0xc91021  addu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd70) {
            ctx->pc = 0x31DD88u;
            goto label_31dd88;
        }
    }
    ctx->pc = 0x31DD78u;
    // 0x31dd78: 0xc0efe64  jal         func_3BF990
    ctx->pc = 0x31DD78u;
    SET_GPR_U32(ctx, 31, 0x31DD80u);
    ctx->pc = 0x31DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DD78u;
    // 0x31dd7c: 0x24844500  addiu       $a0, $a0, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF990u, 0x31DD78u, 0x31DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DD80u;
label_31dd80:
    // 0x31dd80: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x31DD80u;
    SET_GPR_U32(ctx, 31, 0x31DD88u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x31DD80u, 0x31DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DD88u;
label_31dd88:
    // 0x31dd88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31dd88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31dd8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dd90: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x31dd90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x31dd94: 0x25290054  addiu       $t1, $t1, 0x54
    ctx->pc = 0x31dd94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 84));
    // 0x31dd98: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x31DD98u;
    {
        const bool branch_taken_0x31dd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD98u;
        // 0x31dd9c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd98) {
            ctx->pc = 0x31DD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dd50;
        }
    }
    ctx->pc = 0x31DDA0u;
label_31dda0:
    // 0x31dda0: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x31DDA0u;
    SET_GPR_U32(ctx, 31, 0x31DDA8u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x31DDA0u, 0x31DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DDA8u;
label_31dda8:
    // 0x31dda8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x31dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x31ddac: 0x3c043cf3  lui         $a0, 0x3CF3
    ctx->pc = 0x31ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15603 << 16));
    // 0x31ddb0: 0x3484cf3d  ori         $a0, $a0, 0xCF3D
    ctx->pc = 0x31ddb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53053);
    // 0x31ddb4: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x31ddb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x31ddb8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x31ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x31ddbc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31ddbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31ddc0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31ddc4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x31ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31ddc8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x31ddc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31ddcc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x31ddccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x31ddd0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x31DDD0u;
    {
        const bool branch_taken_0x31ddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDD0u;
        // 0x31ddd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ddd0) {
            ctx->pc = 0x31DE60u;
            goto label_31de60;
        }
    }
    ctx->pc = 0x31DDD8u;
    // 0x31ddd8: 0x3c083cf3  lui         $t0, 0x3CF3
    ctx->pc = 0x31ddd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15603 << 16));
    // 0x31dddc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31dddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31dde0: 0x3508cf3d  ori         $t0, $t0, 0xCF3D
    ctx->pc = 0x31dde0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)53053);
    // 0x31dde4: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x31dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x31dde8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31dde8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ddec: 0x0  nop
    ctx->pc = 0x31ddecu;
    // NOP
label_31ddf0:
    // 0x31ddf0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x31ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x31ddf4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x31ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x31ddf8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31ddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31ddfc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31de00: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x31de00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31de04: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x31de04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31de08: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x31de08u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x31de0c: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x31de0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31de10: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DE10u;
    {
        const bool branch_taken_0x31de10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE10u;
        // 0x31de14: 0xa91021  addu        $v0, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de10) {
            ctx->pc = 0x31DE28u;
            goto label_31de28;
        }
    }
    ctx->pc = 0x31DE18u;
    // 0x31de18: 0xc0efe64  jal         func_3BF990
    ctx->pc = 0x31DE18u;
    SET_GPR_U32(ctx, 31, 0x31DE20u);
    ctx->pc = 0x31DE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE18u;
    // 0x31de1c: 0x24844500  addiu       $a0, $a0, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF990u, 0x31DE18u, 0x31DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE20u;
label_31de20:
    // 0x31de20: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x31DE20u;
    SET_GPR_U32(ctx, 31, 0x31DE28u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x31DE20u, 0x31DE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE28u;
label_31de28:
    // 0x31de28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31de2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31de2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31de30: 0x0  nop
    ctx->pc = 0x31de30u;
    // NOP
    // 0x31de34: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x31DE34u;
    {
        const bool branch_taken_0x31de34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31de34) {
            ctx->pc = 0x31DE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DE34u;
            // 0x31de38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DE68u;
            goto label_31de68;
        }
    }
    ctx->pc = 0x31DE3Cu;
    // 0x31de3c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x31de3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31de40: 0x0  nop
    ctx->pc = 0x31de40u;
    // NOP
    // 0x31de44: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x31DE44u;
    {
        const bool branch_taken_0x31de44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31de44) {
            ctx->pc = 0x31DE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DE44u;
            // 0x31de48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DE68u;
            goto label_31de68;
        }
    }
    ctx->pc = 0x31DE4Cu;
    // 0x31de4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31de4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31de50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31de50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31de54: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x31de54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31de58: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x31DE58u;
    {
        const bool branch_taken_0x31de58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE58u;
        // 0x31de5c: 0x25290054  addiu       $t1, $t1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de58) {
            ctx->pc = 0x31DDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ddf0;
        }
    }
    ctx->pc = 0x31DE60u;
label_31de60:
    // 0x31de60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31de60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31de64:
    // 0x31de64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31de64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31de68:
    // 0x31de68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31de68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31de6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31de6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31de70: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x31de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31de74: 0x3e00008  jr          $ra
    ctx->pc = 0x31DE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE74u;
        // 0x31de78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DE7Cu;
    // 0x31de7c: 0x0  nop
    ctx->pc = 0x31de7cu;
    // NOP
    ctx->pc = 0x31de80u;
}
