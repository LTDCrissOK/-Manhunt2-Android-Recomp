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

// Function: sub_001D7F20
// Address: 0x1d7f20 - 0x1d8358
void sub_001D7F20_0x1d7f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7F20_0x1d7f20");
#endif

    switch (ctx->pc) {
        case 0x1d7f48u: goto label_1d7f48;
        case 0x1d7ff4u: goto label_1d7ff4;
        case 0x1d8004u: goto label_1d8004;
        case 0x1d8024u: goto label_1d8024;
        case 0x1d8080u: goto label_1d8080;
        case 0x1d80e4u: goto label_1d80e4;
        case 0x1d8180u: goto label_1d8180;
        case 0x1d8304u: goto label_1d8304;
        case 0x1d832cu: goto label_1d832c;
        default: break;
    }

    ctx->pc = 0x1d7f20u;

    // 0x1d7f20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d7f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d7f24: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1d7f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1d7f28: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1d7f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1d7f2c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1d7f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1d7f30: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1d7f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1d7f34: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1d7f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1d7f38: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1d7f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x1d7f3c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d7f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d7f40: 0xc076100  jal         func_1D8400
    ctx->pc = 0x1D7F40u;
    SET_GPR_U32(ctx, 31, 0x1D7F48u);
    ctx->pc = 0x1D7F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F40u;
    // 0x1d7f44: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x1D7F40u, 0x1D7F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F48u;
label_1d7f48:
    // 0x1d7f48: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d7f4c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1d7f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1d7f50: 0x8c65918c  lw          $a1, -0x6E74($v1)
    ctx->pc = 0x1d7f50u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F918Cu));
    // 0x1d7f54: 0x8c842b3c  lw          $a0, 0x2B3C($a0)
    ctx->pc = 0x1d7f54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B3Cu));
    // 0x1d7f58: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x1d7f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d7f5c: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x1d7f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d7f60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7F60u;
    {
        const bool branch_taken_0x1d7f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F60u;
        // 0x1d7f64: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f60) {
            ctx->pc = 0x1D7F70u;
            goto label_1d7f70;
        }
    }
    ctx->pc = 0x1D7F68u;
    // 0x1d7f68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7F68u;
    {
        const bool branch_taken_0x1d7f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F68u;
        // 0x1d7f6c: 0x448023  subu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f68) {
            ctx->pc = 0x1D7F74u;
            goto label_1d7f74;
        }
    }
    ctx->pc = 0x1D7F70u;
label_1d7f70:
    // 0x1d7f70: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x1d7f70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1d7f74:
    // 0x1d7f74: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d7f78: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1d7f78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f7c: 0x8c639188  lw          $v1, -0x6E78($v1)
    ctx->pc = 0x1d7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9188u));
    // 0x1d7f80: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1d7f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7f84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7F84u;
    {
        const bool branch_taken_0x1d7f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F84u;
        // 0x1d7f88: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f84) {
            ctx->pc = 0x1D7FA0u;
            goto label_1d7fa0;
        }
    }
    ctx->pc = 0x1D7F8Cu;
    // 0x1d7f8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1d7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1d7f90: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d7f94: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1d7f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7F98u;
    {
        const bool branch_taken_0x1d7f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F98u;
        // 0x1d7f9c: 0xac622b40  sw          $v0, 0x2B40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f98) {
            ctx->pc = 0x1D7FB0u;
            goto label_1d7fb0;
        }
    }
    ctx->pc = 0x1D7FA0u;
label_1d7fa0:
    // 0x1d7fa0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1d7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1d7fa4: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x1d7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d7fa8: 0xac432b40  sw          $v1, 0x2B40($v0)
    ctx->pc = 0x1d7fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11072), GPR_U32(ctx, 3));
    // 0x1d7fac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d7facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7fb0:
    // 0x1d7fb0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d7fb4: 0x8c439194  lw          $v1, -0x6E6C($v0)
    ctx->pc = 0x1d7fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9194u));
    // 0x1d7fb8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7FB8u;
    {
        const bool branch_taken_0x1d7fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FB8u;
        // 0x1d7fbc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fb8) {
            ctx->pc = 0x1D7FDCu;
            goto label_1d7fdc;
        }
    }
    ctx->pc = 0x1D7FC0u;
    // 0x1d7fc0: 0x8c429198  lw          $v0, -0x6E68($v0)
    ctx->pc = 0x1d7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939032)));
    // 0x1d7fc4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7FC4u;
    {
        const bool branch_taken_0x1d7fc4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d7fc4) {
            ctx->pc = 0x1D7FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7FC4u;
            // 0x1d7fc8: 0xae222b40  sw          $v0, 0x2B40($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 11072), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7FD4u;
            goto label_1d7fd4;
        }
    }
    ctx->pc = 0x1D7FCCu;
    // 0x1d7fcc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1D7FCCu;
    {
        const bool branch_taken_0x1d7fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FCCu;
        // 0x1d7fd0: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fcc) {
            ctx->pc = 0x1D8200u;
            goto label_1d8200;
        }
    }
    ctx->pc = 0x1D7FD4u;
label_1d7fd4:
    // 0x1d7fd4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1D7FD4u;
    {
        const bool branch_taken_0x1d7fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FD4u;
        // 0x1d7fd8: 0x3c090048  lui         $t1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fd4) {
            ctx->pc = 0x1D8208u;
            goto label_1d8208;
        }
    }
    ctx->pc = 0x1D7FDCu;
label_1d7fdc:
    // 0x1d7fdc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d7fe0: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x1d7fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1d7fe4: 0x10800079  beqz        $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1D7FE4u;
    {
        const bool branch_taken_0x1d7fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FE4u;
        // 0x1d7fe8: 0x8e222b40  lw          $v0, 0x2B40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fe4) {
            ctx->pc = 0x1D81CCu;
            goto label_1d81cc;
        }
    }
    ctx->pc = 0x1D7FECu;
    // 0x1d7fec: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x1D7FECu;
    SET_GPR_U32(ctx, 31, 0x1D7FF4u);
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x1D7FECu, 0x1D7FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FF4u;
label_1d7ff4:
    // 0x1d7ff4: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1D7FF4u;
    {
        const bool branch_taken_0x1d7ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FF4u;
        // 0x1d7ff8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ff4) {
            ctx->pc = 0x1D81C8u;
            goto label_1d81c8;
        }
    }
    ctx->pc = 0x1D7FFCu;
    // 0x1d7ffc: 0xc0bf280  jal         func_2FCA00
    ctx->pc = 0x1D7FFCu;
    SET_GPR_U32(ctx, 31, 0x1D8004u);
    ctx->pc = 0x1D8000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FFCu;
    // 0x1d8000: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCA00u, 0x1D7FFCu, 0x1D8004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8004u;
label_1d8004:
    // 0x1d8004: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x1d8004u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x1d8008: 0x3c0b0048  lui         $t3, 0x48
    ctx->pc = 0x1d8008u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)72 << 16));
    // 0x1d800c: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x1d800cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x1d8010: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1d8010u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1d8014: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1D8014u;
    {
        const bool branch_taken_0x1d8014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8014u;
        // 0x1d8018: 0x3c0a0040  lui         $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8014) {
            ctx->pc = 0x1D8244u;
            goto label_1d8244;
        }
    }
    ctx->pc = 0x1D801Cu;
    // 0x1d801c: 0xc076100  jal         func_1D8400
    ctx->pc = 0x1D801Cu;
    SET_GPR_U32(ctx, 31, 0x1D8024u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x1D801Cu, 0x1D8024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8024u;
label_1d8024:
    // 0x1d8024: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d8024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8028: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d8028u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d802c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D802Cu;
    {
        const bool branch_taken_0x1d802c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D802Cu;
        // 0x1d8030: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d802c) {
            ctx->pc = 0x1D8048u;
            goto label_1d8048;
        }
    }
    ctx->pc = 0x1D8034u;
    // 0x1d8034: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8038: 0x0  nop
    ctx->pc = 0x1d8038u;
    // NOP
    // 0x1d803c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d803cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d8040: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8040u;
    {
        const bool branch_taken_0x1d8040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8040) {
            ctx->pc = 0x1D8060u;
            goto label_1d8060;
        }
    }
    ctx->pc = 0x1D8048u;
label_1d8048:
    // 0x1d8048: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d804c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d8050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8054: 0x0  nop
    ctx->pc = 0x1d8054u;
    // NOP
    // 0x1d8058: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d8058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d805c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d805cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d8060:
    // 0x1d8060: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1d8060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1d8064: 0x3421c28e  ori         $at, $at, 0xC28E
    ctx->pc = 0x1d8064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49806);
    // 0x1d8068: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d8068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d806c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d806cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d8070: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8074: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x1d8074u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1d8078: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x1D8078u;
    SET_GPR_U32(ctx, 31, 0x1D8080u);
    ctx->pc = 0x1D807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8078u;
    // 0x1d807c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x1D8078u, 0x1D8080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8080u;
label_1d8080:
    // 0x1d8080: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d8080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8084: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d8084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d8088: 0x8c62919c  lw          $v0, -0x6E64($v1)
    ctx->pc = 0x1d8088u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F919Cu));
    // 0x1d808c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1d808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d8090: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8090u;
    {
        const bool branch_taken_0x1d8090 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D8094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8090u;
        // 0x1d8094: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8090) {
            ctx->pc = 0x1D80ACu;
            goto label_1d80ac;
        }
    }
    ctx->pc = 0x1D8098u;
    // 0x1d8098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d809c: 0x0  nop
    ctx->pc = 0x1d809cu;
    // NOP
    // 0x1d80a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d80a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d80a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D80A4u;
    {
        const bool branch_taken_0x1d80a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d80a4) {
            ctx->pc = 0x1D80C8u;
            goto label_1d80c8;
        }
    }
    ctx->pc = 0x1D80ACu;
label_1d80ac:
    // 0x1d80ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d80acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1d80b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d80b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d80b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d80b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d80b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d80b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d80bc: 0x0  nop
    ctx->pc = 0x1d80bcu;
    // NOP
    // 0x1d80c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d80c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d80c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d80c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d80c8:
    // 0x1d80c8: 0x3c014205  lui         $at, 0x4205
    ctx->pc = 0x1d80c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16901 << 16));
    // 0x1d80cc: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x1d80ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
    // 0x1d80d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d80d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d80d4: 0x0  nop
    ctx->pc = 0x1d80d4u;
    // NOP
    // 0x1d80d8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1d80d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d80dc: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x1D80DCu;
    SET_GPR_U32(ctx, 31, 0x1D80E4u);
    ctx->pc = 0x1D80E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D80DCu;
    // 0x1d80e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x1D80DCu, 0x1D80E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D80E4u;
label_1d80e4:
    // 0x1d80e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d80e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d80ec: 0xae242b40  sw          $a0, 0x2B40($s1)
    ctx->pc = 0x1d80ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11072), GPR_U32(ctx, 4));
    // 0x1d80f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d80f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80f4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D80F4u;
    {
        const bool branch_taken_0x1d80f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D80F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80F4u;
        // 0x1d80f8: 0x244591a0  addiu       $a1, $v0, -0x6E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80f4) {
            ctx->pc = 0x1D8110u;
            goto label_1d8110;
        }
    }
    ctx->pc = 0x1D80FCu;
    // 0x1d80fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d80fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8100: 0x0  nop
    ctx->pc = 0x1d8100u;
    // NOP
    // 0x1d8104: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d8104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d8108: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8108u;
    {
        const bool branch_taken_0x1d8108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8108u;
        // 0x1d810c: 0x4601a041  sub.s       $f1, $f20, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8108) {
            ctx->pc = 0x1D8130u;
            goto label_1d8130;
        }
    }
    ctx->pc = 0x1D8110u;
label_1d8110:
    // 0x1d8110: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1d8110u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1d8114: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1d8114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1d8118: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d8118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d811c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d811cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8120: 0x0  nop
    ctx->pc = 0x1d8120u;
    // NOP
    // 0x1d8124: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d8124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d8128: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d8128u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1d812c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x1d812cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_1d8130:
    // 0x1d8130: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1d8130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8134: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d8134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8138: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d8138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d813c: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x1d813cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x1d8140: 0x3c0b0048  lui         $t3, 0x48
    ctx->pc = 0x1d8140u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)72 << 16));
    // 0x1d8144: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x1d8144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x1d8148: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d8148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d814c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1d814cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1d8150: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x1d8150u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x1d8154: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d8154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d8158: 0xc4c091a0  lwc1        $f0, -0x6E60($a2)
    ctx->pc = 0x1d8158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294939040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d815c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1d815cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8160: 0x0  nop
    ctx->pc = 0x1d8160u;
    // NOP
    // 0x1d8164: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1D8164u;
    {
        const bool branch_taken_0x1d8164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8164u;
        // 0x1d8168: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8164) {
            ctx->pc = 0x1D81A0u;
            goto label_1d81a0;
        }
    }
    ctx->pc = 0x1D816Cu;
    // 0x1d816c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1d816cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1d8170: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1d8170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8174: 0x8c832b40  lw          $v1, 0x2B40($a0)
    ctx->pc = 0x1d8174u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B40u));
    // 0x1d8178: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x1d8178u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x1d817c: 0x0  nop
    ctx->pc = 0x1d817cu;
    // NOP
label_1d8180:
    // 0x1d8180: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d8180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d8184: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8188: 0x0  nop
    ctx->pc = 0x1d8188u;
    // NOP
    // 0x1d818c: 0x0  nop
    ctx->pc = 0x1d818cu;
    // NOP
    // 0x1d8190: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D8190u;
    {
        const bool branch_taken_0x1d8190 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8190u;
        // 0x1d8194: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8190) {
            ctx->pc = 0x1D8180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8180;
        }
    }
    ctx->pc = 0x1D8198u;
    // 0x1d8198: 0xe44091a0  swc1        $f0, -0x6E60($v0)
    ctx->pc = 0x1d8198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294939040), bits); }
    // 0x1d819c: 0xac832b40  sw          $v1, 0x2B40($a0)
    ctx->pc = 0x1d819cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11072), GPR_U32(ctx, 3));
label_1d81a0:
    // 0x1d81a0: 0x8e232b40  lw          $v1, 0x2B40($s1)
    ctx->pc = 0x1d81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11072)));
    // 0x1d81a4: 0x2c6203e9  sltiu       $v0, $v1, 0x3E9
    ctx->pc = 0x1d81a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1001) ? 1 : 0);
    // 0x1d81a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D81A8u;
    {
        const bool branch_taken_0x1d81a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81A8u;
        // 0x1d81ac: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81a8) {
            ctx->pc = 0x1D81BCu;
            goto label_1d81bc;
        }
    }
    ctx->pc = 0x1D81B0u;
    // 0x1d81b0: 0x54600024  bnel        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D81B0u;
    {
        const bool branch_taken_0x1d81b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d81b0) {
            ctx->pc = 0x1D81B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D81B0u;
            // 0x1d81b4: 0xae72919c  sw          $s2, -0x6E64($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294939036), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8244u;
            goto label_1d8244;
        }
    }
    ctx->pc = 0x1D81B8u;
    // 0x1d81b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d81bc:
    // 0x1d81bc: 0xae222b40  sw          $v0, 0x2B40($s1)
    ctx->pc = 0x1d81bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11072), GPR_U32(ctx, 2));
    // 0x1d81c0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D81C0u;
    {
        const bool branch_taken_0x1d81c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81C0u;
        // 0x1d81c4: 0xae72919c  sw          $s2, -0x6E64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294939036), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81c0) {
            ctx->pc = 0x1D8244u;
            goto label_1d8244;
        }
    }
    ctx->pc = 0x1D81C8u;
label_1d81c8:
    // 0x1d81c8: 0x8e222b40  lw          $v0, 0x2B40($s1)
    ctx->pc = 0x1d81c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11072)));
label_1d81cc:
    // 0x1d81cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D81CCu;
    {
        const bool branch_taken_0x1d81cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81CCu;
        // 0x1d81d0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81cc) {
            ctx->pc = 0x1D81E0u;
            goto label_1d81e0;
        }
    }
    ctx->pc = 0x1D81D4u;
    // 0x1d81d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d81d8: 0xae222b40  sw          $v0, 0x2B40($s1)
    ctx->pc = 0x1d81d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11072), GPR_U32(ctx, 2));
    // 0x1d81dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1d81e0:
    // 0x1d81e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d81e4: 0x8e242b40  lw          $a0, 0x2B40($s1)
    ctx->pc = 0x1d81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11072)));
    // 0x1d81e8: 0xac40919c  sw          $zero, -0x6E64($v0)
    ctx->pc = 0x1d81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939036), GPR_U32(ctx, 0));
    // 0x1d81ec: 0xac6091a0  sw          $zero, -0x6E60($v1)
    ctx->pc = 0x1d81ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F91A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91A0u, _value); } while (0);
    // 0x1d81f0: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x1d81f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d81f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D81F4u;
    {
        const bool branch_taken_0x1d81f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81F4u;
        // 0x1d81f8: 0x24030042  addiu       $v1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81f4) {
            ctx->pc = 0x1D8220u;
            goto label_1d8220;
        }
    }
    ctx->pc = 0x1D81FCu;
    // 0x1d81fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d81fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d8200:
    // 0x1d8200: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x1d8200u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x1d8204: 0xae222b40  sw          $v0, 0x2B40($s1)
    ctx->pc = 0x1d8204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11072), GPR_U32(ctx, 2));
label_1d8208:
    // 0x1d8208: 0x3c0b0048  lui         $t3, 0x48
    ctx->pc = 0x1d8208u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)72 << 16));
    // 0x1d820c: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x1d820cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x1d8210: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1d8210u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1d8214: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x1d8214u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x1d8218: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D8218u;
    {
        const bool branch_taken_0x1d8218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8218u;
        // 0x1d821c: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8218) {
            ctx->pc = 0x1D8244u;
            goto label_1d8244;
        }
    }
    ctx->pc = 0x1D8220u;
label_1d8220:
    // 0x1d8220: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1d8220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d8224: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x1d8224u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x1d8228: 0x3c0b0048  lui         $t3, 0x48
    ctx->pc = 0x1d8228u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)72 << 16));
    // 0x1d822c: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x1d822cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x1d8230: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1d8230u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1d8234: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x1d8234u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x1d8238: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8238u;
    {
        const bool branch_taken_0x1d8238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8238u;
        // 0x1d823c: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8238) {
            ctx->pc = 0x1D8244u;
            goto label_1d8244;
        }
    }
    ctx->pc = 0x1D8240u;
    // 0x1d8240: 0xae232b40  sw          $v1, 0x2B40($s1)
    ctx->pc = 0x1d8240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11072), GPR_U32(ctx, 3));
label_1d8244:
    // 0x1d8244: 0x8d222b44  lw          $v0, 0x2B44($t1)
    ctx->pc = 0x1d8244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11076)));
    // 0x1d8248: 0x24e52b30  addiu       $a1, $a3, 0x2B30
    ctx->pc = 0x1d8248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 11056));
    // 0x1d824c: 0xc4e02b30  lwc1        $f0, 0x2B30($a3)
    ctx->pc = 0x1d824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8254: 0x8e242b40  lw          $a0, 0x2B40($s1)
    ctx->pc = 0x1d8254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11072)));
    // 0x1d8258: 0xad222b44  sw          $v0, 0x2B44($t1)
    ctx->pc = 0x1d8258u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 11076), GPR_U32(ctx, 2));
    // 0x1d825c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D825Cu;
    {
        const bool branch_taken_0x1d825c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D825Cu;
        // 0x1d8260: 0xe5602b4c  swc1        $f0, 0x2B4C($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 11084), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d825c) {
            ctx->pc = 0x1D8278u;
            goto label_1d8278;
        }
    }
    ctx->pc = 0x1D8264u;
    // 0x1d8264: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d8264u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8268: 0x0  nop
    ctx->pc = 0x1d8268u;
    // NOP
    // 0x1d826c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d826cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d8270: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8270u;
    {
        const bool branch_taken_0x1d8270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8270) {
            ctx->pc = 0x1D8294u;
            goto label_1d8294;
        }
    }
    ctx->pc = 0x1D8278u;
label_1d8278:
    // 0x1d8278: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1d8278u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1d827c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1d827cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1d8280: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d8280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d8284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8288: 0x0  nop
    ctx->pc = 0x1d8288u;
    // NOP
    // 0x1d828c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d828cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d8290: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d8290u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d8294:
    // 0x1d8294: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1d8294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1d8298: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1d8298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1d829c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d829cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d82a0: 0x8d02bd5c  lw          $v0, -0x42A4($t0)
    ctx->pc = 0x1d82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950236)));
    // 0x1d82a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d82a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d82a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D82A8u;
    {
        const bool branch_taken_0x1d82a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82A8u;
        // 0x1d82ac: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82a8) {
            ctx->pc = 0x1D82E0u;
            goto label_1d82e0;
        }
    }
    ctx->pc = 0x1D82B0u;
    // 0x1d82b0: 0x9142b821  lbu         $v0, -0x47DF($t2)
    ctx->pc = 0x1d82b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4294948897)));
    // 0x1d82b4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D82B4u;
    {
        const bool branch_taken_0x1d82b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82B4u;
        // 0x1d82b8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82b4) {
            ctx->pc = 0x1D82ECu;
            goto label_1d82ec;
        }
    }
    ctx->pc = 0x1D82BCu;
    // 0x1d82bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1d82bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1d82c0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1d82c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1d82c4: 0x8ca32b00  lw          $v1, 0x2B00($a1)
    ctx->pc = 0x1d82c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B00u));
    // 0x1d82c8: 0x8e242b40  lw          $a0, 0x2B40($s1)
    ctx->pc = 0x1d82c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11072)));
    // 0x1d82cc: 0x8cc22b50  lw          $v0, 0x2B50($a2)
    ctx->pc = 0x1d82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B50u));
    // 0x1d82d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d82d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d82d8: 0xaca32b00  sw          $v1, 0x2B00($a1)
    ctx->pc = 0x1d82d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x482B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B00u, _value); } while (0);
    // 0x1d82dc: 0xacc22b50  sw          $v0, 0x2B50($a2)
    ctx->pc = 0x1d82dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482B50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B50u, _value); } while (0);
label_1d82e0:
    // 0x1d82e0: 0x9142b821  lbu         $v0, -0x47DF($t2)
    ctx->pc = 0x1d82e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4294948897)));
    // 0x1d82e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D82E4u;
    {
        const bool branch_taken_0x1d82e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82E4u;
        // 0x1d82e8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82e4) {
            ctx->pc = 0x1D82FCu;
            goto label_1d82fc;
        }
    }
    ctx->pc = 0x1D82ECu;
label_1d82ec:
    // 0x1d82ec: 0x8e232b40  lw          $v1, 0x2B40($s1)
    ctx->pc = 0x1d82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11072)));
    // 0x1d82f0: 0x8c822b50  lw          $v0, 0x2B50($a0)
    ctx->pc = 0x1d82f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11088)));
    // 0x1d82f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d82f8: 0xac822b50  sw          $v0, 0x2B50($a0)
    ctx->pc = 0x1d82f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11088), GPR_U32(ctx, 2));
label_1d82fc:
    // 0x1d82fc: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x1D82FCu;
    SET_GPR_U32(ctx, 31, 0x1D8304u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x1D82FCu, 0x1D8304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8304u;
label_1d8304:
    // 0x1d8304: 0x8e232b40  lw          $v1, 0x2B40($s1)
    ctx->pc = 0x1d8304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11072)));
    // 0x1d8308: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8308u;
    {
        const bool branch_taken_0x1d8308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8308u;
        // 0x1d830c: 0xa6a22b48  sh          $v0, 0x2B48($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 11080), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8308) {
            ctx->pc = 0x1D832Cu;
            goto label_1d832c;
        }
    }
    ctx->pc = 0x1D8310u;
    // 0x1d8310: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d8310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d8314: 0x8e889188  lw          $t0, -0x6E78($s4)
    ctx->pc = 0x1d8314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939016)));
    // 0x1d8318: 0x24a5d750  addiu       $a1, $a1, -0x28B0
    ctx->pc = 0x1d8318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956880));
    // 0x1d831c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d831cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8324: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1D8324u;
    SET_GPR_U32(ctx, 31, 0x1D832Cu);
    ctx->pc = 0x1D8328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8324u;
    // 0x1d8328: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1D8324u, 0x1D832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D832Cu;
label_1d832c:
    // 0x1d832c: 0xae909188  sw          $s0, -0x6E78($s4)
    ctx->pc = 0x1d832cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294939016), GPR_U32(ctx, 16));
    // 0x1d8330: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1d8330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d8334: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1d8334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d8338: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1d8338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d833c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1d833cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1d8340: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1d8340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d8344: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1d8344u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d8348: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d8348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d834c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1d834cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d8350: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8350u;
        // 0x1d8354: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8358u;
}
