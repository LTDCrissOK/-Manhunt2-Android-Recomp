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

// Function: sub_001EBF90
// Address: 0x1ebf90 - 0x1ec140
void sub_001EBF90_0x1ebf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBF90_0x1ebf90");
#endif

    switch (ctx->pc) {
        case 0x1ebffcu: goto label_1ebffc;
        case 0x1ec020u: goto label_1ec020;
        case 0x1ec034u: goto label_1ec034;
        case 0x1ec06cu: goto label_1ec06c;
        case 0x1ec100u: goto label_1ec100;
        case 0x1ec10cu: goto label_1ec10c;
        default: break;
    }

    ctx->pc = 0x1ebf90u;

    // 0x1ebf90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ebf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ebf94: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1ebf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1ebf98: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1ebf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1ebf9c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1ebf9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfa0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1ebfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1ebfa4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ebfa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfa8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1ebfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1ebfac: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1ebfacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfb0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1ebfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1ebfb4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ebfb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfb8: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1ebfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1ebfbc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1ebfbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfc0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1ebfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1ebfc4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1ebfc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfc8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ebfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1ebfcc: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1ebfccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfd0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1ebfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1ebfd4: 0x2aa20009  slti        $v0, $s5, 0x9
    ctx->pc = 0x1ebfd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ebfd8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1EBFD8u;
    {
        const bool branch_taken_0x1ebfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBFD8u;
        // 0x1ebfdc: 0xffbf0088  sd          $ra, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfd8) {
            ctx->pc = 0x1EC0A8u;
            goto label_1ec0a8;
        }
    }
    ctx->pc = 0x1EBFE0u;
    // 0x1ebfe0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1ebfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1ebfe4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1ebfe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfe8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1ebfe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ebfecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebff0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ebff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebff4: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1EBFF4u;
    SET_GPR_U32(ctx, 31, 0x1EBFFCu);
    ctx->pc = 0x1EBFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBFF4u;
    // 0x1ebff8: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1EBFF4u, 0x1EBFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBFFCu;
label_1ebffc:
    // 0x1ebffc: 0x93a50028  lbu         $a1, 0x28($sp)
    ctx->pc = 0x1ebffcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec000: 0x34108420  ori         $s0, $zero, 0x8420
    ctx->pc = 0x1ec000u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1ec004: 0x93b10029  lbu         $s1, 0x29($sp)
    ctx->pc = 0x1ec004u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1ec008: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1ec008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1ec00c: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x1ec00cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    // 0x1ec010: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x1ec010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x1ec014: 0x262880b  movn        $s1, $s3, $v0
    ctx->pc = 0x1ec014u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 19));
    // 0x1ec018: 0xc07ad44  jal         func_1EB510
    ctx->pc = 0x1EC018u;
    SET_GPR_U32(ctx, 31, 0x1EC020u);
    ctx->pc = 0x1EC01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC018u;
    // 0x1ec01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB510u, 0x1EC018u, 0x1EC020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC020u;
label_1ec020:
    // 0x1ec020: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ec020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ec024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec028: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec02c: 0xc07ad4e  jal         func_1EB538
    ctx->pc = 0x1EC02Cu;
    SET_GPR_U32(ctx, 31, 0x1EC034u);
    ctx->pc = 0x1EC030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC02Cu;
    // 0x1ec030: 0x2b603  sra         $s6, $v0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB538u, 0x1EC02Cu, 0x1EC034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC034u;
label_1ec034:
    // 0x1ec034: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x1ec034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ec038: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ec038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ec03c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1ec03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec040: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1ec040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ec044: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1ec044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec048: 0x29e03  sra         $s3, $v0, 24
    ctx->pc = 0x1ec048u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1ec04c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1ec04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ec050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec054: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1ec054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ec058: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec05c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1ec05cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ec060: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1ec060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ec064: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1EC064u;
    SET_GPR_U32(ctx, 31, 0x1EC06Cu);
    ctx->pc = 0x1EC068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC064u;
    // 0x1ec068: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1EC064u, 0x1EC06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC06Cu;
label_1ec06c:
    // 0x1ec06c: 0x2731018  mult        $v0, $s3, $s3
    ctx->pc = 0x1ec06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ec070: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1ec070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ec074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec078: 0x0  nop
    ctx->pc = 0x1ec078u;
    // NOP
    // 0x1ec07c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec080: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1ec080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec084: 0x0  nop
    ctx->pc = 0x1ec084u;
    // NOP
    // 0x1ec088: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC088u;
    {
        const bool branch_taken_0x1ec088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC088u;
        // 0x1ec08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec088) {
            ctx->pc = 0x1EC0B0u;
            goto label_1ec0b0;
        }
    }
    ctx->pc = 0x1EC090u;
    // 0x1ec090: 0x34028d90  ori         $v0, $zero, 0x8D90
    ctx->pc = 0x1ec090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36240);
    // 0x1ec094: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ec094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ec098: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ec098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec09c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1ec09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ec0a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC0A0u;
    {
        const bool branch_taken_0x1ec0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0A0u;
        // 0x1ec0a4: 0x34108000  ori         $s0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0a0) {
            ctx->pc = 0x1EC0B4u;
            goto label_1ec0b4;
        }
    }
    ctx->pc = 0x1EC0A8u;
label_1ec0a8:
    // 0x1ec0a8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1EC0A8u;
    {
        const bool branch_taken_0x1ec0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0A8u;
        // 0x1ec0ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0a8) {
            ctx->pc = 0x1EC10Cu;
            goto label_1ec10c;
        }
    }
    ctx->pc = 0x1EC0B0u;
label_1ec0b0:
    // 0x1ec0b0: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1ec0b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1ec0b4:
    // 0x1ec0b4: 0x34028db0  ori         $v0, $zero, 0x8DB0
    ctx->pc = 0x1ec0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36272);
    // 0x1ec0b8: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1ec0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1ec0bc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ec0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ec0c0: 0xae170d98  sw          $s7, 0xD98($s0)
    ctx->pc = 0x1ec0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3480), GPR_U32(ctx, 23));
    // 0x1ec0c4: 0xae150d9c  sw          $s5, 0xD9C($s0)
    ctx->pc = 0x1ec0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 21));
    // 0x1ec0c8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1ec0c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ec0cc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ec0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec0d0: 0x0  nop
    ctx->pc = 0x1ec0d0u;
    // NOP
    // 0x1ec0d4: 0x0  nop
    ctx->pc = 0x1ec0d4u;
    // NOP
    // 0x1ec0d8: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1ec0d8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ec0dc: 0x34118420  ori         $s1, $zero, 0x8420
    ctx->pc = 0x1ec0dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1ec0e0: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1ec0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1ec0e4: 0xae1e0dcc  sw          $fp, 0xDCC($s0)
    ctx->pc = 0x1ec0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3532), GPR_U32(ctx, 30));
    // 0x1ec0e8: 0xa2160dc8  sb          $s6, 0xDC8($s0)
    ctx->pc = 0x1ec0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3528), (uint8_t)GPR_U32(ctx, 22));
    // 0x1ec0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0f0: 0xa2130dc9  sb          $s3, 0xDC9($s0)
    ctx->pc = 0x1ec0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3529), (uint8_t)GPR_U32(ctx, 19));
    // 0x1ec0f4: 0x32c500ff  andi        $a1, $s6, 0xFF
    ctx->pc = 0x1ec0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1ec0f8: 0xc07ad58  jal         func_1EB560
    ctx->pc = 0x1EC0F8u;
    SET_GPR_U32(ctx, 31, 0x1EC100u);
    ctx->pc = 0x1EC0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC0F8u;
    // 0x1ec0fc: 0x326600ff  andi        $a2, $s3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB560u, 0x1EC0F8u, 0x1EC100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC100u;
label_1ec100:
    // 0x1ec100: 0xe6000dc4  swc1        $f0, 0xDC4($s0)
    ctx->pc = 0x1ec100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3524), bits); }
    // 0x1ec104: 0xc07acd4  jal         func_1EB350
    ctx->pc = 0x1EC104u;
    SET_GPR_U32(ctx, 31, 0x1EC10Cu);
    ctx->pc = 0x1EC108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC104u;
    // 0x1ec108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB350u, 0x1EC104u, 0x1EC10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC10Cu;
label_1ec10c:
    // 0x1ec10c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1ec10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec110: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1ec110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec114: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1ec114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec118: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1ec118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ec11c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1ec11cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec120: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1ec120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec124: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ec124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ec128: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1ec128u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ec12c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1ec12cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ec130: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1ec130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ec134: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC134u;
        // 0x1ec138: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC13Cu;
    // 0x1ec13c: 0x0  nop
    ctx->pc = 0x1ec13cu;
    // NOP
    ctx->pc = 0x1ec140u;
}
