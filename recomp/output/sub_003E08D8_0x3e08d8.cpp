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

// Function: sub_003E08D8
// Address: 0x3e08d8 - 0x3e0aa8
void sub_003E08D8_0x3e08d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E08D8_0x3e08d8");
#endif

    switch (ctx->pc) {
        case 0x3e0914u: goto label_3e0914;
        case 0x3e0930u: goto label_3e0930;
        case 0x3e0a3cu: goto label_3e0a3c;
        case 0x3e0a58u: goto label_3e0a58;
        case 0x3e0a68u: goto label_3e0a68;
        default: break;
    }

    ctx->pc = 0x3e08d8u;

    // 0x3e08d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e08d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3e08dc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3e08dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3e08e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3e08e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3e08e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e08e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e08e8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3e08e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3e08ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e08ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e08f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3e08f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3e08f4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3e08f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e08f8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3e08f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e08fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3e08fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3e0900: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3e0900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x3e0904: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e0904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3e0908: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3e0908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3e090c: 0xc0f81ea  jal         func_3E07A8
    ctx->pc = 0x3E090Cu;
    SET_GPR_U32(ctx, 31, 0x3E0914u);
    ctx->pc = 0x3E0910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E090Cu;
    // 0x3e0910: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E07A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E07A8u, 0x3E090Cu, 0x3E0914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0914u;
label_3e0914:
    // 0x3e0914: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x3e0914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3e0918: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3E0918u;
    {
        const bool branch_taken_0x3e0918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0918u;
        // 0x3e091c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0918) {
            ctx->pc = 0x3E0A4Cu;
            goto label_3e0a4c;
        }
    }
    ctx->pc = 0x3E0920u;
    // 0x3e0920: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3e0920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3e0924: 0x251a823  subu        $s5, $s2, $s1
    ctx->pc = 0x3e0924u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3e0928: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e0928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e092c: 0x0  nop
    ctx->pc = 0x3e092cu;
    // NOP
label_3e0930:
    // 0x3e0930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e0930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0934: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0938: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e093c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e093cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0940: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0940u;
    {
        const bool branch_taken_0x3e0940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0940u;
        // 0x3e0944: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0940) {
            ctx->pc = 0x3E095Cu;
            goto label_3e095c;
        }
    }
    ctx->pc = 0x3E0948u;
    // 0x3e0948: 0xc4a000d0  lwc1        $f0, 0xD0($a1)
    ctx->pc = 0x3e0948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e094c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e094cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0950: 0x0  nop
    ctx->pc = 0x3e0950u;
    // NOP
    // 0x3e0954: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E0954u;
    {
        const bool branch_taken_0x3e0954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0954) {
            ctx->pc = 0x3E0958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0954u;
            // 0x3e0958: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E095Cu;
            goto label_3e095c;
        }
    }
    ctx->pc = 0x3E095Cu;
label_3e095c:
    // 0x3e095c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e0960: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0964: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0968: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e096c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E096Cu;
    {
        const bool branch_taken_0x3e096c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E096Cu;
        // 0x3e0970: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e096c) {
            ctx->pc = 0x3E0988u;
            goto label_3e0988;
        }
    }
    ctx->pc = 0x3E0974u;
    // 0x3e0974: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x3e0974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0978: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e0978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e097c: 0x0  nop
    ctx->pc = 0x3e097cu;
    // NOP
    // 0x3e0980: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x3E0980u;
    {
        const bool branch_taken_0x3e0980 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E0984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0980u;
        // 0x3e0984: 0x38c20001  xori        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0980) {
            ctx->pc = 0x3E09E4u;
            goto label_3e09e4;
        }
    }
    ctx->pc = 0x3E0988u;
label_3e0988:
    // 0x3e0988: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3e0988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e098c: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e098cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e0990: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0990u;
    {
        const bool branch_taken_0x3e0990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0990) {
            ctx->pc = 0x3E0994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0990u;
            // 0x3e0994: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E09B0u;
            goto label_3e09b0;
        }
    }
    ctx->pc = 0x3E0998u;
    // 0x3e0998: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E0998u;
    {
        const bool branch_taken_0x3e0998 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0998u;
        // 0x3e099c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0998) {
            ctx->pc = 0x3E09E4u;
            goto label_3e09e4;
        }
    }
    ctx->pc = 0x3E09A0u;
    // 0x3e09a0: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x3e09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x3e09a4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e09a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e09a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3E09A8u;
    {
        const bool branch_taken_0x3e09a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09A8u;
        // 0x3e09ac: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e09a8) {
            ctx->pc = 0x3E09E4u;
            goto label_3e09e4;
        }
    }
    ctx->pc = 0x3E09B0u;
label_3e09b0:
    // 0x3e09b0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e09b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e09b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E09B4u;
    {
        const bool branch_taken_0x3e09b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09B4u;
        // 0x3e09b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e09b4) {
            ctx->pc = 0x3E09E4u;
            goto label_3e09e4;
        }
    }
    ctx->pc = 0x3E09BCu;
    // 0x3e09bc: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E09BCu;
    {
        const bool branch_taken_0x3e09bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09BCu;
        // 0x3e09c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e09bc) {
            ctx->pc = 0x3E09E0u;
            goto label_3e09e0;
        }
    }
    ctx->pc = 0x3E09C4u;
    // 0x3e09c4: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x3e09c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x3e09c8: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e09c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e09cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E09CCu;
    {
        const bool branch_taken_0x3e09cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09CCu;
        // 0x3e09d0: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e09cc) {
            ctx->pc = 0x3E09E0u;
            goto label_3e09e0;
        }
    }
    ctx->pc = 0x3E09D4u;
    // 0x3e09d4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e09d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e09d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e09d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e09dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e09dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e09e0:
    // 0x3e09e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e09e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e09e4:
    // 0x3e09e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E09E4u;
    {
        const bool branch_taken_0x3e09e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09E4u;
        // 0x3e09e8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e09e4) {
            ctx->pc = 0x3E0A3Cu;
            goto label_3e0a3c;
        }
    }
    ctx->pc = 0x3E09ECu;
    // 0x3e09ec: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x3e09ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e09f0: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x3e09f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e09f4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3e09f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e09f8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3e09f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e09fc: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x3e09fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3e0a00: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x3e0a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3e0a04: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x3e0a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0a08: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x3e0a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e0a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0a10: 0x6a260007  ldl         $a2, 0x7($s1)
    ctx->pc = 0x3e0a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3e0a14: 0x6e260000  ldr         $a2, 0x0($s1)
    ctx->pc = 0x3e0a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3e0a18: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x3e0a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e0a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0a20: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x3e0a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0a24: 0x9fa70014  lwu         $a3, 0x14($sp)
    ctx->pc = 0x3e0a24u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3e0a28: 0x1530c3  sra         $a2, $s5, 3
    ctx->pc = 0x3e0a28u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 21), 3));
    // 0x3e0a2c: 0x9fa20010  lwu         $v0, 0x10($sp)
    ctx->pc = 0x3e0a2cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e0a30: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3e0a30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3e0a34: 0xc0f813a  jal         func_3E04E8
    ctx->pc = 0x3E0A34u;
    SET_GPR_U32(ctx, 31, 0x3E0A3Cu);
    ctx->pc = 0x3E0A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0A34u;
    // 0x3e0a38: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E04E8u, 0x3E0A34u, 0x3E0A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0A3Cu;
label_3e0a3c:
    // 0x3e0a3c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3e0a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e0a40: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x3e0a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3e0a44: 0x5440ffba  bnel        $v0, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x3E0A44u;
    {
        const bool branch_taken_0x3e0a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0a44) {
            ctx->pc = 0x3E0A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0A44u;
            // 0x3e0a48: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0930;
        }
    }
    ctx->pc = 0x3E0A4Cu;
label_3e0a4c:
    // 0x3e0a4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0A4Cu;
    {
        const bool branch_taken_0x3e0a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A4Cu;
        // 0x3e0a50: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0a4c) {
            ctx->pc = 0x3E0A68u;
            goto label_3e0a68;
        }
    }
    ctx->pc = 0x3E0A54u;
    // 0x3e0a54: 0x0  nop
    ctx->pc = 0x3e0a54u;
    // NOP
label_3e0a58:
    // 0x3e0a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e0a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0a5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3e0a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0a60: 0xc0f8218  jal         func_3E0860
    ctx->pc = 0x3E0A60u;
    SET_GPR_U32(ctx, 31, 0x3E0A68u);
    ctx->pc = 0x3E0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0A60u;
    // 0x3e0a64: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0860u, 0x3E0A60u, 0x3E0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0A68u;
label_3e0a68:
    // 0x3e0a68: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x3e0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3e0a6c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3e0a6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3e0a70: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3e0a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e0a74: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3E0A74u;
    {
        const bool branch_taken_0x3e0a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A74u;
        // 0x3e0a78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0a74) {
            ctx->pc = 0x3E0A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0a58;
        }
    }
    ctx->pc = 0x3E0A7Cu;
    // 0x3e0a7c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3e0a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e0a80: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3e0a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e0a84: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3e0a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e0a88: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3e0a88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e0a8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3e0a8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e0a90: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3e0a90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3e0a94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e0a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e0a98: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3e0a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e0a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A9Cu;
        // 0x3e0aa0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0AA4u;
    // 0x3e0aa4: 0x0  nop
    ctx->pc = 0x3e0aa4u;
    // NOP
    ctx->pc = 0x3e0aa8u;
}
