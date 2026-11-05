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

// Function: sub_00289990
// Address: 0x289990 - 0x289c00
void sub_00289990_0x289990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289990_0x289990");
#endif

    switch (ctx->pc) {
        case 0x2899c0u: goto label_2899c0;
        case 0x2899ccu: goto label_2899cc;
        case 0x2899e0u: goto label_2899e0;
        case 0x289a0cu: goto label_289a0c;
        case 0x289a3cu: goto label_289a3c;
        case 0x289a60u: goto label_289a60;
        case 0x289a78u: goto label_289a78;
        case 0x289a90u: goto label_289a90;
        case 0x289ab8u: goto label_289ab8;
        case 0x289ad0u: goto label_289ad0;
        case 0x289ae4u: goto label_289ae4;
        case 0x289b04u: goto label_289b04;
        case 0x289b18u: goto label_289b18;
        case 0x289b38u: goto label_289b38;
        case 0x289b4cu: goto label_289b4c;
        case 0x289b6cu: goto label_289b6c;
        case 0x289b8cu: goto label_289b8c;
        case 0x289b9cu: goto label_289b9c;
        case 0x289bacu: goto label_289bac;
        case 0x289bc8u: goto label_289bc8;
        case 0x289bd4u: goto label_289bd4;
        default: break;
    }

    ctx->pc = 0x289990u;

    // 0x289990: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x289990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x289994: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x289994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x289998: 0x8c449160  lw          $a0, -0x6EA0($v0)
    ctx->pc = 0x289998u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9160u));
    // 0x28999c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x28999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2899a0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2899a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2899a4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2899a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2899a8: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2899a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2899ac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2899acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2899b0: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2899b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2899b4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2899b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2899b8: 0xc0a1ac6  jal         func_286B18
    ctx->pc = 0x2899B8u;
    SET_GPR_U32(ctx, 31, 0x2899C0u);
    ctx->pc = 0x2899BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899B8u;
    // 0x2899bc: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B18u, 0x2899B8u, 0x2899C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899C0u;
label_2899c0:
    // 0x2899c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2899c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899c4: 0xc0a03bc  jal         func_280EF0
    ctx->pc = 0x2899C4u;
    SET_GPR_U32(ctx, 31, 0x2899CCu);
    ctx->pc = 0x2899C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899C4u;
    // 0x2899c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EF0u, 0x2899C4u, 0x2899CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899CCu;
label_2899cc:
    // 0x2899cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2899ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2899d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2899d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899d8: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x2899D8u;
    SET_GPR_U32(ctx, 31, 0x2899E0u);
    ctx->pc = 0x2899DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899D8u;
    // 0x2899dc: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x2899D8u, 0x2899E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899E0u;
label_2899e0:
    // 0x2899e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2899e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2899e4: 0x8c622b34  lw          $v0, 0x2B34($v1)
    ctx->pc = 0x2899e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B34u));
    // 0x2899e8: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x2899e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2899ec: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2899ECu;
    {
        const bool branch_taken_0x2899ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2899F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899ECu;
        // 0x2899f0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899ec) {
            ctx->pc = 0x289B4Cu;
            goto label_289b4c;
        }
    }
    ctx->pc = 0x2899F4u;
    // 0x2899f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2899f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2899f8: 0x24524ec0  addiu       $s2, $v0, 0x4EC0
    ctx->pc = 0x2899f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20160));
    // 0x2899fc: 0x24a5ae58  addiu       $a1, $a1, -0x51A8
    ctx->pc = 0x2899fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946392));
    // 0x289a00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a04: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289A04u;
    SET_GPR_U32(ctx, 31, 0x289A0Cu);
    ctx->pc = 0x289A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A04u;
    // 0x289a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289A04u, 0x289A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A0Cu;
label_289a0c:
    // 0x289a0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x289a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a10: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x289a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x289a14: 0x8c43a320  lw          $v1, -0x5CE0($v0)
    ctx->pc = 0x289a14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66A320u));
    // 0x289a18: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x289A18u;
    {
        const bool branch_taken_0x289a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A18u;
        // 0x289a1c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a18) {
            ctx->pc = 0x289B4Cu;
            goto label_289b4c;
        }
    }
    ctx->pc = 0x289A20u;
    // 0x289a20: 0x8c43aa7c  lw          $v1, -0x5584($v0)
    ctx->pc = 0x289a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945404)));
    // 0x289a24: 0x5460003e  bnel        $v1, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x289A24u;
    {
        const bool branch_taken_0x289a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289a24) {
            ctx->pc = 0x289A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289A24u;
            // 0x289a28: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289B20u;
            goto label_289b20;
        }
    }
    ctx->pc = 0x289A2Cu;
    // 0x289a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289a30: 0x10100b  movn        $v0, $zero, $s0
    ctx->pc = 0x289a30u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x289a34: 0xc0a223c  jal         func_2888F0
    ctx->pc = 0x289A34u;
    SET_GPR_U32(ctx, 31, 0x289A3Cu);
    ctx->pc = 0x289A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A34u;
    // 0x289a38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888F0u, 0x289A34u, 0x289A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A3Cu;
label_289a3c:
    // 0x289a3c: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x289A3Cu;
    {
        const bool branch_taken_0x289a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289a3c) {
            ctx->pc = 0x289A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289A3Cu;
            // 0x289a40: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289AECu;
            goto label_289aec;
        }
    }
    ctx->pc = 0x289A44u;
    // 0x289a44: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x289A44u;
    {
        const bool branch_taken_0x289a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A44u;
        // 0x289a48: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a44) {
            ctx->pc = 0x289AA0u;
            goto label_289aa0;
        }
    }
    ctx->pc = 0x289A4Cu;
    // 0x289a4c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289a50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a54: 0x24a5ae60  addiu       $a1, $a1, -0x51A0
    ctx->pc = 0x289a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946400));
    // 0x289a58: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289A58u;
    SET_GPR_U32(ctx, 31, 0x289A60u);
    ctx->pc = 0x289A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A58u;
    // 0x289a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289A58u, 0x289A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A60u;
label_289a60:
    // 0x289a60: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289a64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a68: 0x24a5ae68  addiu       $a1, $a1, -0x5198
    ctx->pc = 0x289a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946408));
    // 0x289a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a70: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289A70u;
    SET_GPR_U32(ctx, 31, 0x289A78u);
    ctx->pc = 0x289A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A70u;
    // 0x289a74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289A70u, 0x289A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A78u;
label_289a78:
    // 0x289a78: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x289a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a84: 0x24a5ae70  addiu       $a1, $a1, -0x5190
    ctx->pc = 0x289a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946416));
    // 0x289a88: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289A88u;
    SET_GPR_U32(ctx, 31, 0x289A90u);
    ctx->pc = 0x289A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A88u;
    // 0x289a8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289A88u, 0x289A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A90u;
label_289a90:
    // 0x289a90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x289a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x289a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a98: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x289A98u;
    {
        const bool branch_taken_0x289a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A98u;
        // 0x289a9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a98) {
            ctx->pc = 0x289ADCu;
            goto label_289adc;
        }
    }
    ctx->pc = 0x289AA0u;
label_289aa0:
    // 0x289aa0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289aa4: 0x24a5ae68  addiu       $a1, $a1, -0x5198
    ctx->pc = 0x289aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946408));
    // 0x289aa8: 0x2610a4f0  addiu       $s0, $s0, -0x5B10
    ctx->pc = 0x289aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943984));
    // 0x289aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ab0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289AB0u;
    SET_GPR_U32(ctx, 31, 0x289AB8u);
    ctx->pc = 0x289AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289AB0u;
    // 0x289ab4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289AB0u, 0x289AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AB8u;
label_289ab8:
    // 0x289ab8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289abc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ac0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ac4: 0x24a5ae78  addiu       $a1, $a1, -0x5188
    ctx->pc = 0x289ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946424));
    // 0x289ac8: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289AC8u;
    SET_GPR_U32(ctx, 31, 0x289AD0u);
    ctx->pc = 0x289ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289AC8u;
    // 0x289acc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289AC8u, 0x289AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AD0u;
label_289ad0:
    // 0x289ad0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x289ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ad8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x289ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289adc:
    // 0x289adc: 0xc0a197a  jal         func_2865E8
    ctx->pc = 0x289ADCu;
    SET_GPR_U32(ctx, 31, 0x289AE4u);
    ctx->pc = 0x289AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289ADCu;
    // 0x289ae0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2865E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2865E8u, 0x289ADCu, 0x289AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AE4u;
label_289ae4:
    // 0x289ae4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x289AE4u;
    {
        const bool branch_taken_0x289ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ae4) {
            ctx->pc = 0x289B4Cu;
            goto label_289b4c;
        }
    }
    ctx->pc = 0x289AECu;
label_289aec:
    // 0x289aec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289af0: 0x2610a4f0  addiu       $s0, $s0, -0x5B10
    ctx->pc = 0x289af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943984));
    // 0x289af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289af8: 0x24a5ae78  addiu       $a1, $a1, -0x5188
    ctx->pc = 0x289af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946424));
    // 0x289afc: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289AFCu;
    SET_GPR_U32(ctx, 31, 0x289B04u);
    ctx->pc = 0x289B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289AFCu;
    // 0x289b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289AFCu, 0x289B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B04u;
label_289b04:
    // 0x289b04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x289b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x289b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b10: 0xc0a197a  jal         func_2865E8
    ctx->pc = 0x289B10u;
    SET_GPR_U32(ctx, 31, 0x289B18u);
    ctx->pc = 0x289B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B10u;
    // 0x289b14: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2865E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2865E8u, 0x289B10u, 0x289B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B18u;
label_289b18:
    // 0x289b18: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x289B18u;
    {
        const bool branch_taken_0x289b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289b18) {
            ctx->pc = 0x289B4Cu;
            goto label_289b4c;
        }
    }
    ctx->pc = 0x289B20u;
label_289b20:
    // 0x289b20: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289b24: 0x2610a4f0  addiu       $s0, $s0, -0x5B10
    ctx->pc = 0x289b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943984));
    // 0x289b28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b2c: 0x24a5ae68  addiu       $a1, $a1, -0x5198
    ctx->pc = 0x289b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946408));
    // 0x289b30: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289B30u;
    SET_GPR_U32(ctx, 31, 0x289B38u);
    ctx->pc = 0x289B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B30u;
    // 0x289b34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289B30u, 0x289B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B38u;
label_289b38:
    // 0x289b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x289b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x289b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b44: 0xc0a197a  jal         func_2865E8
    ctx->pc = 0x289B44u;
    SET_GPR_U32(ctx, 31, 0x289B4Cu);
    ctx->pc = 0x289B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B44u;
    // 0x289b48: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2865E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2865E8u, 0x289B44u, 0x289B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B4Cu;
label_289b4c:
    // 0x289b4c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x289b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x289b50: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x289b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x289b54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x289b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x289b58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x289b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289b5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x289b60: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x289b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x289b64: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x289B64u;
    SET_GPR_U32(ctx, 31, 0x289B6Cu);
    ctx->pc = 0x289B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B64u;
    // 0x289b68: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x289B64u, 0x289B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B6Cu;
label_289b6c:
    // 0x289b6c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x289b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x289b70: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x289b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x289b74: 0xc454a4f4  lwc1        $f20, -0x5B0C($v0)
    ctx->pc = 0x289b74u;
    { uint32_t bits = FAST_READ32(0x3FA4F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289b78: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x289b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x289b7c: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x289b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x289b80: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x289b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x289b84: 0xc0a2260  jal         func_288980
    ctx->pc = 0x289B84u;
    SET_GPR_U32(ctx, 31, 0x289B8Cu);
    ctx->pc = 0x289B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B84u;
    // 0x289b88: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x288980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288980u, 0x289B84u, 0x289B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B8Cu;
label_289b8c:
    // 0x289b8c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x289b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x289b90: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x289b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x289b94: 0xc0a2604  jal         func_289810
    ctx->pc = 0x289B94u;
    SET_GPR_U32(ctx, 31, 0x289B9Cu);
    ctx->pc = 0x289B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B94u;
    // 0x289b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289810u, 0x289B94u, 0x289B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B9Cu;
label_289b9c:
    // 0x289b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ba0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x289ba0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x289ba4: 0xc0a2afc  jal         func_28ABF0
    ctx->pc = 0x289BA4u;
    SET_GPR_U32(ctx, 31, 0x289BACu);
    ctx->pc = 0x289BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289BA4u;
    // 0x289ba8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABF0u, 0x289BA4u, 0x289BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289BACu;
label_289bac:
    // 0x289bac: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x289bacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x289bb0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x289bb0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x289bb4: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x289bb4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x289bb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289bbc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x289bbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x289bc0: 0xc0a2298  jal         func_288A60
    ctx->pc = 0x289BC0u;
    SET_GPR_U32(ctx, 31, 0x289BC8u);
    ctx->pc = 0x289BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289BC0u;
    // 0x289bc4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288A60u, 0x289BC0u, 0x289BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289BC8u;
label_289bc8:
    // 0x289bc8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x289bc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x289bcc: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x289BCCu;
    SET_GPR_U32(ctx, 31, 0x289BD4u);
    ctx->pc = 0x289BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289BCCu;
    // 0x289bd0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x289BCCu, 0x289BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289BD4u;
label_289bd4:
    // 0x289bd4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x289bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x289bd8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x289bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x289bdc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x289bdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x289be0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x289be0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x289be4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x289be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x289be8: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x289be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x289bec: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x289becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x289bf0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x289bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x289BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289BF4u;
        // 0x289bf8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289BFCu;
    // 0x289bfc: 0x0  nop
    ctx->pc = 0x289bfcu;
    // NOP
    ctx->pc = 0x289c00u;
}
