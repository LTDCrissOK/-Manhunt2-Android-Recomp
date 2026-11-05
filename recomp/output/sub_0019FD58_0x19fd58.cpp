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

// Function: sub_0019FD58
// Address: 0x19fd58 - 0x1a0068
void sub_0019FD58_0x19fd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FD58_0x19fd58");
#endif

    switch (ctx->pc) {
        case 0x19fd9cu: goto label_19fd9c;
        case 0x19fdacu: goto label_19fdac;
        case 0x19fe18u: goto label_19fe18;
        case 0x19fe30u: goto label_19fe30;
        case 0x19fe38u: goto label_19fe38;
        case 0x19fe48u: goto label_19fe48;
        case 0x19feb4u: goto label_19feb4;
        case 0x19ff1cu: goto label_19ff1c;
        case 0x19ffa8u: goto label_19ffa8;
        case 0x19ffb0u: goto label_19ffb0;
        case 0x1a0010u: goto label_1a0010;
        case 0x1a001cu: goto label_1a001c;
        default: break;
    }

    ctx->pc = 0x19fd58u;

    // 0x19fd58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19fd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19fd5c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19fd60: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19fd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19fd64: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x19fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x19fd68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19fd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd6c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19fd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19fd70: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x19fd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x19fd74: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x19fd74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19fd78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19fd7c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19FD7Cu;
    {
        const bool branch_taken_0x19fd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD7Cu;
        // 0x19fd80: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd7c) {
            ctx->pc = 0x19FDB0u;
            goto label_19fdb0;
        }
    }
    ctx->pc = 0x19FD84u;
    // 0x19fd84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19fd88: 0x8c621050  lw          $v0, 0x1050($v1)
    ctx->pc = 0x19fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4176)));
    // 0x19fd8c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x19FD8Cu;
    {
        const bool branch_taken_0x19fd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fd8c) {
            ctx->pc = 0x19FD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FD8Cu;
            // 0x19fd90: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE00u;
            goto label_19fe00;
        }
    }
    ctx->pc = 0x19FD94u;
    // 0x19fd94: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19FD94u;
    SET_GPR_U32(ctx, 31, 0x19FD9Cu);
    ctx->pc = 0x19FD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD94u;
    // 0x19fd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19FD94u, 0x19FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD9Cu;
label_19fd9c:
    // 0x19fd9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19fda0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fda4: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x19FDA4u;
    SET_GPR_U32(ctx, 31, 0x19FDACu);
    ctx->pc = 0x19FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDA4u;
    // 0x19fda8: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x19FDA4u, 0x19FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDACu;
label_19fdac:
    // 0x19fdac: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x19fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_19fdb0:
    // 0x19fdb0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19fdb4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x19fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x19fdb8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x19fdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x19fdbc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19fdc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fdc4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x19fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x19fdc8: 0x3c07bfff  lui         $a3, 0xBFFF
    ctx->pc = 0x19fdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49151 << 16));
    // 0x19fdcc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x19fdccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x19fdd0: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x19fdd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x19fdd4: 0x34e701ff  ori         $a3, $a3, 0x1FF
    ctx->pc = 0x19fdd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)511);
    // 0x19fdd8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x19fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x19fddc: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x19fddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19fde0: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x19fde0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x19fde4: 0xae050064  sw          $a1, 0x64($s0)
    ctx->pc = 0x19fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 5));
    // 0x19fde8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19fdec: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x19fdecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
    // 0x19fdf0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x19fdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x19fdf4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x19fdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x19fdf8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x19FDF8u;
    {
        const bool branch_taken_0x19fdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDF8u;
        // 0x19fdfc: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdf8) {
            ctx->pc = 0x1A0048u;
            goto label_1a0048;
        }
    }
    ctx->pc = 0x19FE00u;
label_19fe00:
    // 0x19fe00: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x19FE00u;
    {
        const bool branch_taken_0x19fe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE00u;
        // 0x19fe04: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe00) {
            ctx->pc = 0x19FEBCu;
            goto label_19febc;
        }
    }
    ctx->pc = 0x19FE08u;
    // 0x19fe08: 0x8c631004  lw          $v1, 0x1004($v1)
    ctx->pc = 0x19fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x19fe0c: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x19fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x19fe10: 0xc06fb38  jal         func_1BECE0
    ctx->pc = 0x19FE10u;
    SET_GPR_U32(ctx, 31, 0x19FE18u);
    ctx->pc = 0x19FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE10u;
    // 0x19fe14: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x19FE10u, 0x19FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE18u;
label_19fe18:
    // 0x19fe18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19fe1c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x19fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x19fe20: 0x8c621004  lw          $v0, 0x1004($v1)
    ctx->pc = 0x19fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x19fe24: 0x8c450fe8  lw          $a1, 0xFE8($v0)
    ctx->pc = 0x19fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x19fe28: 0xc06fb58  jal         func_1BED60
    ctx->pc = 0x19FE28u;
    SET_GPR_U32(ctx, 31, 0x19FE30u);
    ctx->pc = 0x19FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE28u;
    // 0x19fe2c: 0x24a501e0  addiu       $a1, $a1, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x19FE28u, 0x19FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE30u;
label_19fe30:
    // 0x19fe30: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19FE30u;
    SET_GPR_U32(ctx, 31, 0x19FE38u);
    ctx->pc = 0x19FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE30u;
    // 0x19fe34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19FE30u, 0x19FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE38u;
label_19fe38:
    // 0x19fe38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19fe3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fe3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe40: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x19FE40u;
    SET_GPR_U32(ctx, 31, 0x19FE48u);
    ctx->pc = 0x19FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE40u;
    // 0x19fe44: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x19FE40u, 0x19FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE48u;
label_19fe48:
    // 0x19fe48: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x19fe48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x19fe4c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x19fe50: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x19fe54: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x19fe58: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FE58u;
    {
        const bool branch_taken_0x19fe58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE58u;
        // 0x19fe5c: 0x24710938  addiu       $s1, $v1, 0x938 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe58) {
            ctx->pc = 0x19FE74u;
            goto label_19fe74;
        }
    }
    ctx->pc = 0x19FE60u;
    // 0x19fe60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19fe60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fe64: 0x0  nop
    ctx->pc = 0x19fe64u;
    // NOP
    // 0x19fe68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19fe68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19fe6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19FE6Cu;
    {
        const bool branch_taken_0x19fe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe6c) {
            ctx->pc = 0x19FE90u;
            goto label_19fe90;
        }
    }
    ctx->pc = 0x19FE74u;
label_19fe74:
    // 0x19fe74: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19fe78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19fe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19fe7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19fe7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19fe80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19fe80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fe84: 0x0  nop
    ctx->pc = 0x19fe84u;
    // NOP
    // 0x19fe88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19fe88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19fe8c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19fe8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19fe90:
    // 0x19fe90: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19fe90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19fe94: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19fe94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19fe98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19fe98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19fe9c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x19fe9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x19fea0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19fea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19fea4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19fea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x19fea8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19fea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19feac: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x19FEACu;
    SET_GPR_U32(ctx, 31, 0x19FEB4u);
    ctx->pc = 0x19FEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FEACu;
    // 0x19feb0: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x19FEACu, 0x19FEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FEB4u;
label_19feb4:
    // 0x19feb4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x19feb4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x19feb8: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x19feb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_19febc:
    // 0x19febc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19febcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19fec0: 0x8c821050  lw          $v0, 0x1050($a0)
    ctx->pc = 0x19fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4176)));
    // 0x19fec4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19FEC4u;
    {
        const bool branch_taken_0x19fec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEC4u;
        // 0x19fec8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fec4) {
            ctx->pc = 0x19FF00u;
            goto label_19ff00;
        }
    }
    ctx->pc = 0x19FECCu;
    // 0x19fecc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19fed0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19FED0u;
    {
        const bool branch_taken_0x19fed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FED0u;
        // 0x19fed4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fed0) {
            ctx->pc = 0x19FF00u;
            goto label_19ff00;
        }
    }
    ctx->pc = 0x19FED8u;
    // 0x19fed8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FED8u;
    {
        const bool branch_taken_0x19fed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FED8u;
        // 0x19fedc: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fed8) {
            ctx->pc = 0x19FF00u;
            goto label_19ff00;
        }
    }
    ctx->pc = 0x19FEE0u;
    // 0x19fee0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FEE0u;
    {
        const bool branch_taken_0x19fee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEE0u;
        // 0x19fee4: 0x261100a0  addiu       $s1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fee0) {
            ctx->pc = 0x19FF04u;
            goto label_19ff04;
        }
    }
    ctx->pc = 0x19FEE8u;
    // 0x19fee8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x19fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x19feec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19feecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19fef0: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x19fef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x19fef4: 0x346301ff  ori         $v1, $v1, 0x1FF
    ctx->pc = 0x19fef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)511);
    // 0x19fef8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x19FEF8u;
    {
        const bool branch_taken_0x19fef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEF8u;
        // 0x19fefc: 0xdc821020  ld          $v0, 0x1020($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fef8) {
            ctx->pc = 0x19FFC8u;
            goto label_19ffc8;
        }
    }
    ctx->pc = 0x19FF00u;
label_19ff00:
    // 0x19ff00: 0x261100a0  addiu       $s1, $s0, 0xA0
    ctx->pc = 0x19ff00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_19ff04:
    // 0x19ff04: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x19ff08: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x19ff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x19ff0c: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x19FF0Cu;
    {
        const bool branch_taken_0x19ff0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ff0c) {
            ctx->pc = 0x19FF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FF0Cu;
            // 0x19ff10: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A004Cu;
            goto label_1a004c;
        }
    }
    ctx->pc = 0x19FF14u;
    // 0x19ff14: 0xc061a12  jal         func_186848
    ctx->pc = 0x19FF14u;
    SET_GPR_U32(ctx, 31, 0x19FF1Cu);
    ctx->pc = 0x19FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF14u;
    // 0x19ff18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19FF14u, 0x19FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF1Cu;
label_19ff1c:
    // 0x19ff1c: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x19ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x19ff20: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x19ff20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19ff24: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x19ff24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ff28: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19ff28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19ff2c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x19ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19ff30: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ff34: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19ff34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19ff38: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ff3c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x19ff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19ff40: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x19ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19ff44: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19ff44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19ff48: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19ff48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19ff4c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19ff4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19ff50: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x19ff50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19ff54: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x19ff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19ff58: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x19ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19ff5c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x19ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19ff60: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x19ff60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x19ff64: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x19ff64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x19ff68: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x19ff68u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x19ff6c: 0x46010044  c1          0x10044
    ctx->pc = 0x19ff6cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x19ff70: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19ff70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x19ff74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ff74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ff78: 0x0  nop
    ctx->pc = 0x19ff78u;
    // NOP
    // 0x19ff7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ff7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ff80: 0x0  nop
    ctx->pc = 0x19ff80u;
    // NOP
    // 0x19ff84: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x19FF84u;
    {
        const bool branch_taken_0x19ff84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF84u;
        // 0x19ff88: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff84) {
            ctx->pc = 0x19FFD4u;
            goto label_19ffd4;
        }
    }
    ctx->pc = 0x19FF8Cu;
    // 0x19ff8c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x19ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x19ff90: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19ff94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff98: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x19ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x19ff9c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x19ffa0: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19FFA0u;
    SET_GPR_U32(ctx, 31, 0x19FFA8u);
    ctx->pc = 0x19FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFA0u;
    // 0x19ffa4: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19FFA0u, 0x19FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFA8u;
label_19ffa8:
    // 0x19ffa8: 0xc06cdb4  jal         func_1B36D0
    ctx->pc = 0x19FFA8u;
    SET_GPR_U32(ctx, 31, 0x19FFB0u);
    ctx->pc = 0x19FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFA8u;
    // 0x19ffac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x19FFA8u, 0x19FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFB0u;
label_19ffb0:
    // 0x19ffb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ffb4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x19ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x19ffb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19ffb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19ffbc: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x19ffbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x19ffc0: 0x346301ff  ori         $v1, $v1, 0x1FF
    ctx->pc = 0x19ffc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)511);
    // 0x19ffc4: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x19ffc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
label_19ffc8:
    // 0x19ffc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19ffc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19ffcc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19FFCCu;
    {
        const bool branch_taken_0x19ffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFCCu;
        // 0x19ffd0: 0xfc821020  sd          $v0, 0x1020($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ffcc) {
            ctx->pc = 0x1A0048u;
            goto label_1a0048;
        }
    }
    ctx->pc = 0x19FFD4u;
label_19ffd4:
    // 0x19ffd4: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x19ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ffd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ffd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ffdc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x19ffdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x19ffe0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19ffe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19ffe4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19ffe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ffe8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19ffe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19ffec: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x19ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19fff0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19fff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19fff4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19fff4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x19fff8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x19fff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19fffc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19fffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a0000: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x1a0000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0004: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a0004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a0008: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A0008u;
    SET_GPR_U32(ctx, 31, 0x1A0010u);
    ctx->pc = 0x1A000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0008u;
    // 0x1a000c: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A0008u, 0x1A0010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0010u;
label_1a0010:
    // 0x1a0010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0014: 0xc06cdb8  jal         func_1B36E0
    ctx->pc = 0x1A0014u;
    SET_GPR_U32(ctx, 31, 0x1A001Cu);
    ctx->pc = 0x1A0018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0014u;
    // 0x1a0018: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36E0u, 0x1A0014u, 0x1A001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A001Cu;
label_1a001c:
    // 0x1a001c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a001cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0020: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1a0020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1a0024: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a0028: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x1a0028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x1a002c: 0x346301ff  ori         $v1, $v1, 0x1FF
    ctx->pc = 0x1a002cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)511);
    // 0x1a0030: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1a0030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a0034: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1a0034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1a0038: 0xdca21020  ld          $v0, 0x1020($a1)
    ctx->pc = 0x1a0038u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
    // 0x1a003c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a0040: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a0040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a0044: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x1a0044u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
label_1a0048:
    // 0x1a0048: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a0048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a004c:
    // 0x1a004c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a004cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0050: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a0050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0054: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a0054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a0058: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1a0058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a005c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A005Cu;
        // 0x1a0060: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A005Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0064u;
    // 0x1a0064: 0x0  nop
    ctx->pc = 0x1a0064u;
    // NOP
    ctx->pc = 0x1a0068u;
}
