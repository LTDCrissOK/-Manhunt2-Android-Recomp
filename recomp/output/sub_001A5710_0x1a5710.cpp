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

// Function: sub_001A5710
// Address: 0x1a5710 - 0x1a58f8
void sub_001A5710_0x1a5710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5710_0x1a5710");
#endif

    switch (ctx->pc) {
        case 0x1a57fcu: goto label_1a57fc;
        case 0x1a5838u: goto label_1a5838;
        case 0x1a5860u: goto label_1a5860;
        case 0x1a5880u: goto label_1a5880;
        case 0x1a58d8u: goto label_1a58d8;
        default: break;
    }

    ctx->pc = 0x1a5710u;

    // 0x1a5710: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a5710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a5714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a5714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a571c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1a571cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1a5720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a5720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5724: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1a5724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1a5728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a572c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1a572cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1a5730: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a5730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5734: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1a5734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1a5738: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1a5738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a573c: 0xa20301a5  sb          $v1, 0x1A5($s0)
    ctx->pc = 0x1a573cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 421), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5740: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a5740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5744: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x1a5744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x1a5748: 0xae030190  sw          $v1, 0x190($s0)
    ctx->pc = 0x1a5748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
    // 0x1a574c: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1a574cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x1a5750: 0xae120148  sw          $s2, 0x148($s0)
    ctx->pc = 0x1a5750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 18));
    // 0x1a5754: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1a5754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1a5758: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1a5758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1a575c: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x1a575cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x1a5760: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x1a5760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x1a5764: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x1a5764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x1a5768: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x1a5768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x1a576c: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x1a576cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x1a5770: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x1a5770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x1a5774: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x1a5774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x1a5778: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x1a5778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    // 0x1a577c: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x1a577cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x1a5780: 0xae00017c  sw          $zero, 0x17C($s0)
    ctx->pc = 0x1a5780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
    // 0x1a5784: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x1a5784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x1a5788: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x1a5788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x1a578c: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x1a578cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x1a5790: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x1a5790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x1a5794: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x1a5794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x1a5798: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x1a5798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x1a579c: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x1a579cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x1a57a0: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x1a57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x1a57a4: 0xa20001a4  sb          $zero, 0x1A4($s0)
    ctx->pc = 0x1a57a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 420), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a57a8: 0xa20001a6  sb          $zero, 0x1A6($s0)
    ctx->pc = 0x1a57a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 422), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a57ac: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x1a57acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x1a57b0: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x1a57b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x1a57b4: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x1a57b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x1a57b8: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x1a57b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x1a57bc: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x1a57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x1a57c0: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x1a57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x1a57c4: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x1a57c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x1a57c8: 0xae0401c8  sw          $a0, 0x1C8($s0)
    ctx->pc = 0x1a57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 4));
    // 0x1a57cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a57ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57d0: 0xae0001cc  sw          $zero, 0x1CC($s0)
    ctx->pc = 0x1a57d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 0));
    // 0x1a57d4: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x1a57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x1a57d8: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x1a57d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x1a57dc: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x1a57dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x1a57e0: 0xa20001dc  sb          $zero, 0x1DC($s0)
    ctx->pc = 0x1a57e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 476), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a57e4: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x1a57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x1a57e8: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x1a57e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
    // 0x1a57ec: 0xae0001fc  sw          $zero, 0x1FC($s0)
    ctx->pc = 0x1a57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
    // 0x1a57f0: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x1a57f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1a57f4: 0xc07524a  jal         func_1D4928
    ctx->pc = 0x1A57F4u;
    SET_GPR_U32(ctx, 31, 0x1A57FCu);
    ctx->pc = 0x1A57F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A57F4u;
    // 0x1a57f8: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4928u, 0x1A57F4u, 0x1A57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A57FCu;
label_1a57fc:
    // 0x1a57fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a57fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5800: 0x5620000e  bnel        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1A5800u;
    {
        const bool branch_taken_0x1a5800 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5800) {
            ctx->pc = 0x1A5804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5800u;
            // 0x1a5804: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A583Cu;
            goto label_1a583c;
        }
    }
    ctx->pc = 0x1A5808u;
    // 0x1a5808: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1a5808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1a580c: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1a580cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x1a5810: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a5810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a5814: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A5814u;
    {
        const bool branch_taken_0x1a5814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5814u;
        // 0x1a5818: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5814) {
            ctx->pc = 0x1A58DCu;
            goto label_1a58dc;
        }
    }
    ctx->pc = 0x1A581Cu;
    // 0x1a581c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1a581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a5820: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a5820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a5824: 0x24a50448  addiu       $a1, $a1, 0x448
    ctx->pc = 0x1a5824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1096));
    // 0x1a5828: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a5828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a582c: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x1a582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1a5830: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1A5830u;
    SET_GPR_U32(ctx, 31, 0x1A5838u);
    ctx->pc = 0x1A5834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5830u;
    // 0x1a5834: 0x8c660030  lw          $a2, 0x30($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1A5830u, 0x1A5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5838u;
label_1a5838:
    // 0x1a5838: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a5838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a583c:
    // 0x1a583c: 0x26230418  addiu       $v1, $s1, 0x418
    ctx->pc = 0x1a583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
    // 0x1a5840: 0xae030144  sw          $v1, 0x144($s0)
    ctx->pc = 0x1a5840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 3));
    // 0x1a5844: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1a5844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1a5848: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x1a5848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x1a584c: 0x24846a00  addiu       $a0, $a0, 0x6A00
    ctx->pc = 0x1a584cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27136));
    // 0x1a5850: 0x260601ec  addiu       $a2, $s0, 0x1EC
    ctx->pc = 0x1a5850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
    // 0x1a5854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5858: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x1a5858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1a585c: 0x0  nop
    ctx->pc = 0x1a585cu;
    // NOP
label_1a5860:
    // 0x1a5860: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5864: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a5864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a5868: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x1a5868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1a586c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a586cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a5870: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A5870u;
    {
        const bool branch_taken_0x1a5870 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A5874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5870u;
        // 0x1a5874: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5870) {
            ctx->pc = 0x1A5860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5860;
        }
    }
    ctx->pc = 0x1A5878u;
    // 0x1a5878: 0x24c2000c  addiu       $v0, $a2, 0xC
    ctx->pc = 0x1a5878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x1a587c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a587cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a5880:
    // 0x1a5880: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a5880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a5884: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a5884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a5888: 0x0  nop
    ctx->pc = 0x1a5888u;
    // NOP
    // 0x1a588c: 0x0  nop
    ctx->pc = 0x1a588cu;
    // NOP
    // 0x1a5890: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A5890u;
    {
        const bool branch_taken_0x1a5890 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5890u;
        // 0x1a5894: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5890) {
            ctx->pc = 0x1A5880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5880;
        }
    }
    ctx->pc = 0x1A5898u;
    // 0x1a5898: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x1a5898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1a589c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1a589cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1a58a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A58A0u;
    {
        const bool branch_taken_0x1a58a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a58a0) {
            ctx->pc = 0x1A58B4u;
            goto label_1a58b4;
        }
    }
    ctx->pc = 0x1A58A8u;
    // 0x1a58a8: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x1a58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x1a58ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A58ACu;
    {
        const bool branch_taken_0x1a58ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58ACu;
        // 0x1a58b0: 0xc4401540  lwc1        $f0, 0x1540($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58ac) {
            ctx->pc = 0x1A58BCu;
            goto label_1a58bc;
        }
    }
    ctx->pc = 0x1A58B4u;
label_1a58b4:
    // 0x1a58b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a58b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a58b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a58b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a58bc:
    // 0x1a58bc: 0x0  nop
    ctx->pc = 0x1a58bcu;
    // NOP
    // 0x1a58c0: 0xe6000198  swc1        $f0, 0x198($s0)
    ctx->pc = 0x1a58c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 408), bits); }
    // 0x1a58c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a58c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a58c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58cc: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x1a58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x1a58d0: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A58D0u;
    SET_GPR_U32(ctx, 31, 0x1A58D8u);
    ctx->pc = 0x1A58D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58D0u;
    // 0x1a58d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A58D0u, 0x1A58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58D8u;
label_1a58d8:
    // 0x1a58d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a58d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a58dc:
    // 0x1a58dc: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1a58dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a58e0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1a58e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a58e4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1a58e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a58e8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1a58e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1a58ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A58ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58ECu;
        // 0x1a58f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A58ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A58F4u;
    // 0x1a58f4: 0x0  nop
    ctx->pc = 0x1a58f4u;
    // NOP
    ctx->pc = 0x1a58f8u;
}
