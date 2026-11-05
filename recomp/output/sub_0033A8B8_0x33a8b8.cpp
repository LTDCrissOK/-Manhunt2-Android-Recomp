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

// Function: sub_0033A8B8
// Address: 0x33a8b8 - 0x33ab80
void sub_0033A8B8_0x33a8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A8B8_0x33a8b8");
#endif

    switch (ctx->pc) {
        case 0x33a8ecu: goto label_33a8ec;
        case 0x33a8f8u: goto label_33a8f8;
        case 0x33a920u: goto label_33a920;
        case 0x33a948u: goto label_33a948;
        case 0x33a960u: goto label_33a960;
        case 0x33a9acu: goto label_33a9ac;
        case 0x33a9ccu: goto label_33a9cc;
        case 0x33aa18u: goto label_33aa18;
        case 0x33ab28u: goto label_33ab28;
        case 0x33ab54u: goto label_33ab54;
        default: break;
    }

    ctx->pc = 0x33a8b8u;

    // 0x33a8b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x33a8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x33a8bc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x33a8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x33a8c0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x33a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x33a8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33a8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a8c8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x33a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x33a8cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33a8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a8d0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x33a8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x33a8d4: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x33a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x33a8d8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x33a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x33a8dc: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x33a8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x33a8e0: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x33a8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33a8e4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x33A8E4u;
    SET_GPR_U32(ctx, 31, 0x33A8ECu);
    ctx->pc = 0x33A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A8E4u;
    // 0x33a8e8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x33A8E4u, 0x33A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A8ECu;
label_33a8ec:
    // 0x33a8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a8f0: 0xc0ce9fa  jal         func_33A7E8
    ctx->pc = 0x33A8F0u;
    SET_GPR_U32(ctx, 31, 0x33A8F8u);
    ctx->pc = 0x33A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A8F0u;
    // 0x33a8f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A7E8u, 0x33A8F0u, 0x33A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A8F8u;
label_33a8f8:
    // 0x33a8f8: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x33a8f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x33a8fc: 0x96320018  lhu         $s2, 0x18($s1)
    ctx->pc = 0x33a8fcu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x33a900: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x33a900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x33a904: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x33a904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x33a908: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x33a908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x33a90c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A90Cu;
    {
        const bool branch_taken_0x33a90c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A90Cu;
        // 0x33a910: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a90c) {
            ctx->pc = 0x33A928u;
            goto label_33a928;
        }
    }
    ctx->pc = 0x33A914u;
    // 0x33a914: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x33a914u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x33a918: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x33A918u;
    SET_GPR_U32(ctx, 31, 0x33A920u);
    ctx->pc = 0x33A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A918u;
    // 0x33a91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x33A918u, 0x33A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A920u;
label_33a920:
    // 0x33a920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33A920u;
    {
        const bool branch_taken_0x33a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A920u;
        // 0x33a924: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a920) {
            ctx->pc = 0x33A930u;
            goto label_33a930;
        }
    }
    ctx->pc = 0x33A928u;
label_33a928:
    // 0x33a928: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33a928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a92c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33a92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a930:
    // 0x33a930: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x33a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x33a934: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x33a934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x33a938: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x33a938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x33a93c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x33a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33a940: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33A940u;
    SET_GPR_U32(ctx, 31, 0x33A948u);
    ctx->pc = 0x33A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A940u;
    // 0x33a944: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33A940u, 0x33A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A948u;
label_33a948:
    // 0x33a948: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x33a948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33a94c: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x33a94cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33a950: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x33a950u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33a954: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x33a954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a958: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x33A958u;
    {
        const bool branch_taken_0x33a958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A958u;
        // 0x33a95c: 0x8fa70040  lw          $a3, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a958) {
            ctx->pc = 0x33A990u;
            goto label_33a990;
        }
    }
    ctx->pc = 0x33A960u;
label_33a960:
    // 0x33a960: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A960u;
    {
        const bool branch_taken_0x33a960 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A960u;
        // 0x33a964: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a960) {
            ctx->pc = 0x33A984u;
            goto label_33a984;
        }
    }
    ctx->pc = 0x33A968u;
    // 0x33a968: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x33a968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x33a96c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x33a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a970: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x33a970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x33a974: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x33a974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a978: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x33a978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x33a97c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x33a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a980: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x33a980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_33a984:
    // 0x33a984: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x33a984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x33a988: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x33A988u;
    {
        const bool branch_taken_0x33a988 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A988u;
        // 0x33a98c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a988) {
            ctx->pc = 0x33A960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a960;
        }
    }
    ctx->pc = 0x33A990u;
label_33a990:
    // 0x33a990: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x33a990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33a994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a998: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x33a998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
    // 0x33a99c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9a0: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x33a9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x33a9a4: 0xc0ce966  jal         func_33A598
    ctx->pc = 0x33A9A4u;
    SET_GPR_U32(ctx, 31, 0x33A9ACu);
    ctx->pc = 0x33A9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A9A4u;
    // 0x33a9a8: 0x73903  sra         $a3, $a3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A598u, 0x33A9A4u, 0x33A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A9ACu;
label_33a9ac:
    // 0x33a9ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a9b0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x33a9b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9b4: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x33a9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x33a9b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33a9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9bc: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x33a9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33a9c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33a9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9c4: 0xc0b1ace  jal         func_2C6B38
    ctx->pc = 0x33A9C4u;
    SET_GPR_U32(ctx, 31, 0x33A9CCu);
    ctx->pc = 0x33A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A9C4u;
    // 0x33a9c8: 0x63103  sra         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B38u, 0x33A9C4u, 0x33A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A9CCu;
label_33a9cc:
    // 0x33a9cc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x33a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x33a9d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33a9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9d4: 0xc4405cc8  lwc1        $f0, 0x5CC8($v0)
    ctx->pc = 0x33a9d4u;
    { uint32_t bits = FAST_READ32(0x475CC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a9d8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x33a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x33a9dc: 0xc4415ccc  lwc1        $f1, 0x5CCC($v0)
    ctx->pc = 0x33a9dcu;
    { uint32_t bits = FAST_READ32(0x475CCCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a9e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x33a9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33a9e4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x33a9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x33a9e8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x33a9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x33a9ec: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x33a9ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x33a9f0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x33a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x33a9f4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x33a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a9f8: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x33a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x33a9fc: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x33a9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x33aa00: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x33aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33aa04: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x33aa04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x33aa08: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x33aa08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x33aa0c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x33AA0Cu;
    {
        const bool branch_taken_0x33aa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA0Cu;
        // 0x33aa10: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa0c) {
            ctx->pc = 0x33AAD4u;
            goto label_33aad4;
        }
    }
    ctx->pc = 0x33AA14u;
    // 0x33aa14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33aa14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33aa18:
    // 0x33aa18: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x33aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33aa1c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x33aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33aa20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33aa20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33aa24: 0x0  nop
    ctx->pc = 0x33aa24u;
    // NOP
    // 0x33aa28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x33AA28u;
    {
        const bool branch_taken_0x33aa28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA28u;
        // 0x33aa2c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa28) {
            ctx->pc = 0x33AA34u;
            goto label_33aa34;
        }
    }
    ctx->pc = 0x33AA30u;
    // 0x33aa30: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x33aa30u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_33aa34:
    // 0x33aa34: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x33aa34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x33aa38: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x33aa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33aa3c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x33aa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33aa40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33aa40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33aa44: 0x0  nop
    ctx->pc = 0x33aa44u;
    // NOP
    // 0x33aa48: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33AA48u;
    {
        const bool branch_taken_0x33aa48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33aa48) {
            ctx->pc = 0x33AA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AA48u;
            // 0x33aa4c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AA50u;
            goto label_33aa50;
        }
    }
    ctx->pc = 0x33AA50u;
label_33aa50:
    // 0x33aa50: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x33aa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x33aa54: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x33aa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33aa58: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x33aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33aa5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33aa5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33aa60: 0x0  nop
    ctx->pc = 0x33aa60u;
    // NOP
    // 0x33aa64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33AA64u;
    {
        const bool branch_taken_0x33aa64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33aa64) {
            ctx->pc = 0x33AA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AA64u;
            // 0x33aa68: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AA6Cu;
            goto label_33aa6c;
        }
    }
    ctx->pc = 0x33AA6Cu;
label_33aa6c:
    // 0x33aa6c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x33aa6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x33aa70: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x33aa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33aa74: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x33aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33aa78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33aa78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33aa7c: 0x0  nop
    ctx->pc = 0x33aa7cu;
    // NOP
    // 0x33aa80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33AA80u;
    {
        const bool branch_taken_0x33aa80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33aa80) {
            ctx->pc = 0x33AA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AA80u;
            // 0x33aa84: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AA88u;
            goto label_33aa88;
        }
    }
    ctx->pc = 0x33AA88u;
label_33aa88:
    // 0x33aa88: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x33aa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33aa8c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x33aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33aa90: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x33aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33aa94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33aa94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33aa98: 0x0  nop
    ctx->pc = 0x33aa98u;
    // NOP
    // 0x33aa9c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33AA9Cu;
    {
        const bool branch_taken_0x33aa9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33aa9c) {
            ctx->pc = 0x33AAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AA9Cu;
            // 0x33aaa0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AAA4u;
            goto label_33aaa4;
        }
    }
    ctx->pc = 0x33AAA4u;
label_33aaa4:
    // 0x33aaa4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x33aaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33aaa8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x33aaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33aaac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x33aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33aab0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33aab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33aab4: 0x0  nop
    ctx->pc = 0x33aab4u;
    // NOP
    // 0x33aab8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33AAB8u;
    {
        const bool branch_taken_0x33aab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33aab8) {
            ctx->pc = 0x33AABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AAB8u;
            // 0x33aabc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AAC0u;
            goto label_33aac0;
        }
    }
    ctx->pc = 0x33AAC0u;
label_33aac0:
    // 0x33aac0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33aac4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x33aac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x33aac8: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x33aac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x33aacc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x33AACCu;
    {
        const bool branch_taken_0x33aacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AACCu;
        // 0x33aad0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aacc) {
            ctx->pc = 0x33AA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33aa18;
        }
    }
    ctx->pc = 0x33AAD4u;
label_33aad4:
    // 0x33aad4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x33aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33aad8: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x33aadc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x33aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33aae0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x33aae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33aae4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x33aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33aae8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x33aae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33aaec: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x33aaecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33aaf0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x33aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x33aaf4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x33aaf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x33aaf8: 0xf8416f60  sqc2        $vf1, 0x6F60($v0)
    ctx->pc = 0x33aaf8u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B6F60u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B6F60u, _value); } while (0);
    // 0x33aafc: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x33aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x33ab00: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x33ab00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33ab04: 0xf8616f70  sqc2        $vf1, 0x6F70($v1)
    ctx->pc = 0x33ab04u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B6F70u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B6F70u, _value); } while (0);
    // 0x33ab08: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x33ab0c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x33ab0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x33ab10: 0xf8416f80  sqc2        $vf1, 0x6F80($v0)
    ctx->pc = 0x33ab10u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B6F80u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B6F80u, _value); } while (0);
    // 0x33ab14: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x33ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x33ab18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ab1c: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33AB1Cu;
    {
        const bool branch_taken_0x33ab1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ab1c) {
            ctx->pc = 0x33AB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AB1Cu;
            // 0x33ab20: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AB44u;
            goto label_33ab44;
        }
    }
    ctx->pc = 0x33AB24u;
    // 0x33ab24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_33ab28:
    // 0x33ab28: 0x0  nop
    ctx->pc = 0x33ab28u;
    // NOP
    // 0x33ab2c: 0x0  nop
    ctx->pc = 0x33ab2cu;
    // NOP
    // 0x33ab30: 0x0  nop
    ctx->pc = 0x33ab30u;
    // NOP
    // 0x33ab34: 0x0  nop
    ctx->pc = 0x33ab34u;
    // NOP
    // 0x33ab38: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33AB38u;
    {
        const bool branch_taken_0x33ab38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB38u;
        // 0x33ab3c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab38) {
            ctx->pc = 0x33AB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ab28;
        }
    }
    ctx->pc = 0x33AB40u;
    // 0x33ab40: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x33ab40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_33ab44:
    // 0x33ab44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AB44u;
    {
        const bool branch_taken_0x33ab44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB44u;
        // 0x33ab48: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab44) {
            ctx->pc = 0x33AB58u;
            goto label_33ab58;
        }
    }
    ctx->pc = 0x33AB4Cu;
    // 0x33ab4c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x33AB4Cu;
    SET_GPR_U32(ctx, 31, 0x33AB54u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x33AB4Cu, 0x33AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AB54u;
label_33ab54:
    // 0x33ab54: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x33ab54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_33ab58:
    // 0x33ab58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33ab58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab5c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x33ab5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33ab60: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x33ab60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33ab64: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x33ab64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x33ab68: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x33ab68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33ab6c: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x33ab6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x33ab70: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x33ab70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33ab74: 0x3e00008  jr          $ra
    ctx->pc = 0x33AB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB74u;
        // 0x33ab78: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AB7Cu;
    // 0x33ab7c: 0x0  nop
    ctx->pc = 0x33ab7cu;
    // NOP
    ctx->pc = 0x33ab80u;
}
