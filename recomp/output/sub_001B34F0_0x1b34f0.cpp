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

// Function: sub_001B34F0
// Address: 0x1b34f0 - 0x1b36d0
void sub_001B34F0_0x1b34f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B34F0_0x1b34f0");
#endif

    switch (ctx->pc) {
        case 0x1b3528u: goto label_1b3528;
        case 0x1b3550u: goto label_1b3550;
        case 0x1b3570u: goto label_1b3570;
        case 0x1b3590u: goto label_1b3590;
        case 0x1b35c0u: goto label_1b35c0;
        case 0x1b35e0u: goto label_1b35e0;
        default: break;
    }

    ctx->pc = 0x1b34f0u;

    // 0x1b34f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b34f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b34f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b34f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b34f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b34f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34fc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b34fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b3500: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b3500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3504: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b3504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b3508: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b3508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b350c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b350cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b3510: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1b3510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b3514: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b3514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b3518: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x1b3518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1b351c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b351cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b3520: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B3520u;
    SET_GPR_U32(ctx, 31, 0x1B3528u);
    ctx->pc = 0x1B3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3520u;
    // 0x1b3524: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B3520u, 0x1B3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3528u;
label_1b3528:
    // 0x1b3528: 0x3c130043  lui         $s3, 0x43
    ctx->pc = 0x1b3528u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)67 << 16));
    // 0x1b352c: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1b352cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1b3530: 0x26730f90  addiu       $s3, $s3, 0xF90
    ctx->pc = 0x1b3530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3984));
    // 0x1b3534: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b3534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1b3538: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x1b3538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x1b353c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3540: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b3540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b3544: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b3544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b3548: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B3548u;
    SET_GPR_U32(ctx, 31, 0x1B3550u);
    ctx->pc = 0x1B354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3548u;
    // 0x1b354c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B3548u, 0x1B3550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3550u;
label_1b3550:
    // 0x1b3550: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x1b3550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x1b3554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3558: 0xae340010  sw          $s4, 0x10($s1)
    ctx->pc = 0x1b3558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
    // 0x1b355c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1b355cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1b3560: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1b3560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1b3564: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1b3564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1b3568: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B3568u;
    SET_GPR_U32(ctx, 31, 0x1B3570u);
    ctx->pc = 0x1B356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3568u;
    // 0x1b356c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B3568u, 0x1B3570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3570u;
label_1b3570:
    // 0x1b3570: 0xae530018  sw          $s3, 0x18($s2)
    ctx->pc = 0x1b3570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 19));
    // 0x1b3574: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1b3574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1b3578: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x1b3578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
    // 0x1b357c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1b357cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1b3580: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1b3580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1b3584: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1b3584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1b3588: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B3588u;
    SET_GPR_U32(ctx, 31, 0x1B3590u);
    ctx->pc = 0x1B358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3588u;
    // 0x1b358c: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B3588u, 0x1B3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3590u;
label_1b3590:
    // 0x1b3590: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1b3590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x1b3594: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x1b3594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1b3598: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1b3598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1b359c: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x1b359cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1b35a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1b35a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b35a4: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x1b35a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1b35a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b35a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1b35ac: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1b35acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1b35b0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1b35b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1b35b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b35b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b35b8: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1B35B8u;
    SET_GPR_U32(ctx, 31, 0x1B35C0u);
    ctx->pc = 0x1B35BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35B8u;
    // 0x1b35bc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1B35B8u, 0x1B35C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35C0u;
label_1b35c0:
    // 0x1b35c0: 0xae150084  sw          $s5, 0x84($s0)
    ctx->pc = 0x1b35c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 21));
    // 0x1b35c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b35c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35c8: 0x8ea20ff8  lw          $v0, 0xFF8($s5)
    ctx->pc = 0x1b35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4088)));
    // 0x1b35cc: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1b35ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1b35d0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1b35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1b35d4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1b35d8: 0xc06d5a4  jal         func_1B5690
    ctx->pc = 0x1B35D8u;
    SET_GPR_U32(ctx, 31, 0x1B35E0u);
    ctx->pc = 0x1B35DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35D8u;
    // 0x1b35dc: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5690u, 0x1B35D8u, 0x1B35E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35E0u;
label_1b35e0:
    // 0x1b35e0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b35e4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1b35e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1b35e8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b35e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b35ec: 0xc446c620  lwc1        $f6, -0x39E0($v0)
    ctx->pc = 0x1b35ecu;
    { uint32_t bits = FAST_READ32(0x45C620u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1b35f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b35f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b35f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b35f8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b35f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b35fc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1b35fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b3600: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1b3600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1b3604: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b3604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b3608: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b3608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b360c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b360cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3614: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1b3614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1b3618: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b361c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b361cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b3620: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3624: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x1b3624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    // 0x1b3628: 0xae040124  sw          $a0, 0x124($s0)
    ctx->pc = 0x1b3628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 4));
    // 0x1b362c: 0xe6050134  swc1        $f5, 0x134($s0)
    ctx->pc = 0x1b362cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x1b3630: 0xe6040138  swc1        $f4, 0x138($s0)
    ctx->pc = 0x1b3630u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x1b3634: 0xe603013c  swc1        $f3, 0x13C($s0)
    ctx->pc = 0x1b3634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x1b3638: 0xe6000140  swc1        $f0, 0x140($s0)
    ctx->pc = 0x1b3638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x1b363c: 0xe6010144  swc1        $f1, 0x144($s0)
    ctx->pc = 0x1b363cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x1b3640: 0xe6020148  swc1        $f2, 0x148($s0)
    ctx->pc = 0x1b3640u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x1b3644: 0xe60600c0  swc1        $f6, 0xC0($s0)
    ctx->pc = 0x1b3644u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1b3648: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x1b3648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
    // 0x1b364c: 0xae040120  sw          $a0, 0x120($s0)
    ctx->pc = 0x1b364cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 4));
    // 0x1b3650: 0xe60600bc  swc1        $f6, 0xBC($s0)
    ctx->pc = 0x1b3650u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1b3654: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1b3654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1b3658: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x1b3658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x1b365c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1b365cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x1b3660: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x1b3660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x1b3664: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x1b3664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x1b3668: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x1b3668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x1b366c: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x1b366cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x1b3670: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x1b3670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x1b3674: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x1b3674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x1b3678: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1b3678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x1b367c: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x1b367cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x1b3680: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x1b3680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x1b3684: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1b3684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1b3688: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1b3688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1b368c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x1b368cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x1b3690: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x1b3690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x1b3694: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x1b3694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x1b3698: 0xae00017c  sw          $zero, 0x17C($s0)
    ctx->pc = 0x1b3698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
    // 0x1b369c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1b369cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1b36a0: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1b36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1b36a4: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1b36a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1b36a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b36a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b36ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b36acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b36b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b36b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b36b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b36b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b36b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b36b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b36bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b36bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b36c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b36c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b36c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B36C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36C4u;
        // 0x1b36c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B36C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B36CCu;
    // 0x1b36cc: 0x0  nop
    ctx->pc = 0x1b36ccu;
    // NOP
    ctx->pc = 0x1b36d0u;
}
