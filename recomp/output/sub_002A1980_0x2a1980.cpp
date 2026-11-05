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

// Function: sub_002A1980
// Address: 0x2a1980 - 0x2a1bb8
void sub_002A1980_0x2a1980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1980_0x2a1980");
#endif

    switch (ctx->pc) {
        case 0x2a19d8u: goto label_2a19d8;
        case 0x2a1a00u: goto label_2a1a00;
        case 0x2a1a14u: goto label_2a1a14;
        case 0x2a1a1cu: goto label_2a1a1c;
        case 0x2a1a28u: goto label_2a1a28;
        case 0x2a1a34u: goto label_2a1a34;
        case 0x2a1a40u: goto label_2a1a40;
        case 0x2a1a54u: goto label_2a1a54;
        case 0x2a1a64u: goto label_2a1a64;
        case 0x2a1a84u: goto label_2a1a84;
        case 0x2a1a90u: goto label_2a1a90;
        case 0x2a1ac8u: goto label_2a1ac8;
        case 0x2a1ad4u: goto label_2a1ad4;
        case 0x2a1ae4u: goto label_2a1ae4;
        case 0x2a1b10u: goto label_2a1b10;
        case 0x2a1b20u: goto label_2a1b20;
        case 0x2a1b2cu: goto label_2a1b2c;
        case 0x2a1b3cu: goto label_2a1b3c;
        case 0x2a1b74u: goto label_2a1b74;
        default: break;
    }

    ctx->pc = 0x2a1980u;

    // 0x2a1980: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2a1980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2a1984: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2a1984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2a1988: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2a1988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2a198c: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2a198cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2a1990: 0x24538f20  addiu       $s3, $v0, -0x70E0
    ctx->pc = 0x2a1990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
    // 0x2a1994: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2a1994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x2a1998: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a1998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a199c: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2a199cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2a19a0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a19a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a19a4: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2a19a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2a19a8: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2a19a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2a19ac: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2a19acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2a19b0: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x2a19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x2a19b4: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2a19b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2a19b8: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2a19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x2a19bc: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2a19bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a19c0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2a19c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a19c4: 0x3c1e0047  lui         $fp, 0x47
    ctx->pc = 0x2a19c4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
    // 0x2a19c8: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2a19c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a19cc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2A19CCu;
    {
        const bool branch_taken_0x2a19cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19CCu;
        // 0x2a19d0: 0x27b70020  addiu       $s7, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a19cc) {
            ctx->pc = 0x2A1A84u;
            goto label_2a1a84;
        }
    }
    ctx->pc = 0x2A19D4u;
    // 0x2a19d4: 0x0  nop
    ctx->pc = 0x2a19d4u;
    // NOP
label_2a19d8:
    // 0x2a19d8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a19d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a19dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a19dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a19e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a19e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a19e4: 0x28140  sll         $s0, $v0, 5
    ctx->pc = 0x2a19e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a19e8: 0x24a5c8f8  addiu       $a1, $a1, -0x3708
    ctx->pc = 0x2a19e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953208));
    // 0x2a19ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a19f0: 0x2610031c  addiu       $s0, $s0, 0x31C
    ctx->pc = 0x2a19f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 796));
    // 0x2a19f4: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x2a19f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2a19f8: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x2A19F8u;
    SET_GPR_U32(ctx, 31, 0x2A1A00u);
    ctx->pc = 0x2A19FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19F8u;
    // 0x2a19fc: 0xae820318  sw          $v0, 0x318($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 792), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2A19F8u, 0x2A1A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A00u;
label_2a1a00:
    // 0x2a1a00: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a1a00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a1a04: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2a1a04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1a08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a0c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2A1A0Cu;
    SET_GPR_U32(ctx, 31, 0x2A1A14u);
    ctx->pc = 0x2A1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A0Cu;
    // 0x2a1a10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2A1A0Cu, 0x2A1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A14u;
label_2a1a14:
    // 0x2a1a14: 0xc0d7596  jal         func_35D658
    ctx->pc = 0x2A1A14u;
    SET_GPR_U32(ctx, 31, 0x2A1A1Cu);
    ctx->pc = 0x2A1A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A14u;
    // 0x2a1a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D658u, 0x2A1A14u, 0x2A1A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A1Cu;
label_2a1a1c:
    // 0x2a1a1c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2a1a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a1a20: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2A1A20u;
    SET_GPR_U32(ctx, 31, 0x2A1A28u);
    ctx->pc = 0x2A1A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A20u;
    // 0x2a1a24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2A1A20u, 0x2A1A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A28u;
label_2a1a28:
    // 0x2a1a28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a2c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2A1A2Cu;
    SET_GPR_U32(ctx, 31, 0x2A1A34u);
    ctx->pc = 0x2A1A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A2Cu;
    // 0x2a1a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2A1A2Cu, 0x2A1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A34u;
label_2a1a34:
    // 0x2a1a34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a1a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a38: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2A1A38u;
    SET_GPR_U32(ctx, 31, 0x2A1A40u);
    ctx->pc = 0x2A1A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A38u;
    // 0x2a1a3c: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2A1A38u, 0x2A1A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A40u;
label_2a1a40:
    // 0x2a1a40: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2a1a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a1a44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a4c: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x2A1A4Cu;
    SET_GPR_U32(ctx, 31, 0x2A1A54u);
    ctx->pc = 0x2A1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A4Cu;
    // 0x2a1a50: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x2A1A4Cu, 0x2A1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A54u;
label_2a1a54:
    // 0x2a1a54: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2a1a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a1a58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a1a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a5c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2A1A5Cu;
    SET_GPR_U32(ctx, 31, 0x2A1A64u);
    ctx->pc = 0x2A1A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A5Cu;
    // 0x2a1a60: 0xa3a00053  sb          $zero, 0x53($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 83), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2A1A5Cu, 0x2A1A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A64u;
label_2a1a64:
    // 0x2a1a64: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2a1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a1a68: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2a1a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2a1a6c: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x2a1a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a1a70: 0x24828f20  addiu       $v0, $a0, -0x70E0
    ctx->pc = 0x2a1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938400));
    // 0x2a1a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a1a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a1a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1a7c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A1A7Cu;
    SET_GPR_U32(ctx, 31, 0x2A1A84u);
    ctx->pc = 0x2A1A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A7Cu;
    // 0x2a1a80: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A1A7Cu, 0x2A1A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A84u;
label_2a1a84:
    // 0x2a1a84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a88: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2A1A88u;
    SET_GPR_U32(ctx, 31, 0x2A1A90u);
    ctx->pc = 0x2A1A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A88u;
    // 0x2a1a8c: 0x27c5c8f0  addiu       $a1, $fp, -0x3710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2A1A88u, 0x2A1A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A90u;
label_2a1a90:
    // 0x2a1a90: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2A1A90u;
    {
        const bool branch_taken_0x2a1a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a90) {
            ctx->pc = 0x2A1A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1A90u;
            // 0x2a1a94: 0x8e820318  lw          $v0, 0x318($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A19D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a19d8;
        }
    }
    ctx->pc = 0x2A1A98u;
    // 0x2a1a98: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2a1a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2a1a9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a1a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2a1aa0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a1aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a1aa4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a1aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1aa8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2a1aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2a1aac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a1aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2a1ab0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a1ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a1ab4: 0x2693032c  addiu       $s3, $s4, 0x32C
    ctx->pc = 0x2a1ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 812));
    // 0x2a1ab8: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x2a1ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1abc: 0x269002e4  addiu       $s0, $s4, 0x2E4
    ctx->pc = 0x2a1abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 740));
    // 0x2a1ac0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2a1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2a1ac4: 0x0  nop
    ctx->pc = 0x2a1ac4u;
    // NOP
label_2a1ac8:
    // 0x2a1ac8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a1ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1acc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2A1ACCu;
    SET_GPR_U32(ctx, 31, 0x2A1AD4u);
    ctx->pc = 0x2A1AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1ACCu;
    // 0x2a1ad0: 0x2445c908  addiu       $a1, $v0, -0x36F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2A1ACCu, 0x2A1AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AD4u;
label_2a1ad4:
    // 0x2a1ad4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2a1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2a1ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1adc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2A1ADCu;
    SET_GPR_U32(ctx, 31, 0x2A1AE4u);
    ctx->pc = 0x2A1AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1ADCu;
    // 0x2a1ae0: 0x2445c918  addiu       $a1, $v0, -0x36E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2A1ADCu, 0x2A1AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AE4u;
label_2a1ae4:
    // 0x2a1ae4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2a1ae4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1ae8: 0x0  nop
    ctx->pc = 0x2a1ae8u;
    // NOP
    // 0x2a1aec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a1aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a1af0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a1af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1af4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2a1af4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a1af8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2a1af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a1afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a1b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a1b04: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2a1b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a1b08: 0xc0a5a92  jal         func_296A48
    ctx->pc = 0x2A1B08u;
    SET_GPR_U32(ctx, 31, 0x2A1B10u);
    ctx->pc = 0x2A1B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B08u;
    // 0x2a1b0c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296A48u, 0x2A1B08u, 0x2A1B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B10u;
label_2a1b10:
    // 0x2a1b10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a1b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b18: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A1B18u;
    SET_GPR_U32(ctx, 31, 0x2A1B20u);
    ctx->pc = 0x2A1B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B18u;
    // 0x2a1b1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A1B18u, 0x2A1B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B20u;
label_2a1b20:
    // 0x2a1b20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a1b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b24: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A1B24u;
    SET_GPR_U32(ctx, 31, 0x2A1B2Cu);
    ctx->pc = 0x2A1B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B24u;
    // 0x2a1b28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A1B24u, 0x2A1B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B2Cu;
label_2a1b2c:
    // 0x2a1b2c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a1b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a1b30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b34: 0xc0a76c4  jal         func_29DB10
    ctx->pc = 0x2A1B34u;
    SET_GPR_U32(ctx, 31, 0x2A1B3Cu);
    ctx->pc = 0x2A1B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B34u;
    // 0x2a1b38: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DB10u, 0x2A1B34u, 0x2A1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B3Cu;
label_2a1b3c:
    // 0x2a1b3c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x2a1b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a1b40: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2A1B40u;
    {
        const bool branch_taken_0x2a1b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B40u;
        // 0x2a1b44: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b40) {
            ctx->pc = 0x2A1AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1ac8;
        }
    }
    ctx->pc = 0x2A1B48u;
    // 0x2a1b48: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2a1b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2a1b4c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2a1b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2a1b50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a1b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1b54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a1b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a1b5c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2a1b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b60: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a1b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a1b64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a1b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b68: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a1b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a1b6c: 0xc0a5ca2  jal         func_297288
    ctx->pc = 0x2A1B6Cu;
    SET_GPR_U32(ctx, 31, 0x2A1B74u);
    ctx->pc = 0x2A1B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B6Cu;
    // 0x2a1b70: 0xe6c00004  swc1        $f0, 0x4($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x297288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297288u, 0x2A1B6Cu, 0x2A1B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B74u;
label_2a1b74:
    // 0x2a1b74: 0xae82029c  sw          $v0, 0x29C($s4)
    ctx->pc = 0x2a1b74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 668), GPR_U32(ctx, 2));
    // 0x2a1b78: 0xae820f9c  sw          $v0, 0xF9C($s4)
    ctx->pc = 0x2a1b78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3996), GPR_U32(ctx, 2));
    // 0x2a1b7c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2a1b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a1b80: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2a1b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2a1b84: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2a1b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a1b88: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2a1b88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a1b8c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2a1b8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a1b90: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x2a1b90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2a1b94: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2a1b94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a1b98: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x2a1b98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a1b9c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2a1b9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a1ba0: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x2a1ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2a1ba4: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2a1ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a1ba8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2a1ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a1bac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BACu;
        // 0x2a1bb0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1BB4u;
    // 0x2a1bb4: 0x0  nop
    ctx->pc = 0x2a1bb4u;
    // NOP
    ctx->pc = 0x2a1bb8u;
}
