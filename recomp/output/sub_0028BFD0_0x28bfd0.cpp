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

// Function: sub_0028BFD0
// Address: 0x28bfd0 - 0x28ca50
void sub_0028BFD0_0x28bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BFD0_0x28bfd0");
#endif

    switch (ctx->pc) {
        case 0x28c054u: goto label_28c054;
        case 0x28c0a8u: goto label_28c0a8;
        case 0x28c0c8u: goto label_28c0c8;
        case 0x28c110u: goto label_28c110;
        case 0x28c130u: goto label_28c130;
        case 0x28c140u: goto label_28c140;
        case 0x28c15cu: goto label_28c15c;
        case 0x28c1bcu: goto label_28c1bc;
        case 0x28c324u: goto label_28c324;
        case 0x28c368u: goto label_28c368;
        case 0x28c394u: goto label_28c394;
        case 0x28c3a4u: goto label_28c3a4;
        case 0x28c42cu: goto label_28c42c;
        case 0x28c484u: goto label_28c484;
        case 0x28c4b0u: goto label_28c4b0;
        case 0x28c4d0u: goto label_28c4d0;
        case 0x28c4e0u: goto label_28c4e0;
        case 0x28c510u: goto label_28c510;
        case 0x28c530u: goto label_28c530;
        case 0x28c570u: goto label_28c570;
        case 0x28c5a4u: goto label_28c5a4;
        case 0x28c5b4u: goto label_28c5b4;
        case 0x28c5e8u: goto label_28c5e8;
        case 0x28c650u: goto label_28c650;
        case 0x28c670u: goto label_28c670;
        case 0x28c6ccu: goto label_28c6cc;
        case 0x28c6dcu: goto label_28c6dc;
        case 0x28c714u: goto label_28c714;
        case 0x28c748u: goto label_28c748;
        case 0x28c7e8u: goto label_28c7e8;
        case 0x28c910u: goto label_28c910;
        case 0x28c978u: goto label_28c978;
        case 0x28c98cu: goto label_28c98c;
        case 0x28c9a8u: goto label_28c9a8;
        case 0x28ca04u: goto label_28ca04;
        default: break;
    }

    ctx->pc = 0x28bfd0u;

    // 0x28bfd0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x28bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x28bfd4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x28bfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x28bfd8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x28bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x28bfdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28bfdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bfe0: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x28bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x28bfe4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28bfe8: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x28bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x28bfec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x28bfecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bff0: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x28bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
    // 0x28bff4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x28bff4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bff8: 0xe7b90158  swc1        $f25, 0x158($sp)
    ctx->pc = 0x28bff8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x28bffc: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x28bffcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c000: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x28c000u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x28c004: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28c004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x28c008: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x28c008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x28c00c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x28c00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x28c010: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x28c010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x28c014: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x28c014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x28c018: 0xe7ba0160  swc1        $f26, 0x160($sp)
    ctx->pc = 0x28c018u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x28c01c: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x28c01cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x28c020: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x28c020u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x28c024: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x28c024u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x28c028: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x28c028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x28c02c: 0xafa80070  sw          $t0, 0x70($sp)
    ctx->pc = 0x28c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 8));
    // 0x28c030: 0xafa90074  sw          $t1, 0x74($sp)
    ctx->pc = 0x28c030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 9));
    // 0x28c034: 0xafaa0078  sw          $t2, 0x78($sp)
    ctx->pc = 0x28c034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 10));
    // 0x28c038: 0xafab007c  sw          $t3, 0x7C($sp)
    ctx->pc = 0x28c038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 11));
    // 0x28c03c: 0x8fb40178  lw          $s4, 0x178($sp)
    ctx->pc = 0x28c03cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x28c040: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x28c040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x28c044: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28c044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28c048: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x28c048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x28c04c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x28C04Cu;
    SET_GPR_U32(ctx, 31, 0x28C054u);
    ctx->pc = 0x28C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C04Cu;
    // 0x28c050: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x28C04Cu, 0x28C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C054u;
label_28c054:
    // 0x28c054: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28c054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28c058: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x28c058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x28c05c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x28c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x28c060: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x28c060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x28c064: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x28c064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x28c068: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x28c068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x28c06c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C06Cu;
    {
        const bool branch_taken_0x28c06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c06c) {
            ctx->pc = 0x28C08Cu;
            goto label_28c08c;
        }
    }
    ctx->pc = 0x28C074u;
    // 0x28c074: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x28c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c078: 0x46190036  c.le.s      $f0, $f25
    ctx->pc = 0x28c078u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c07c: 0x0  nop
    ctx->pc = 0x28c07cu;
    // NOP
    // 0x28c080: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28C080u;
    {
        const bool branch_taken_0x28c080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C080u;
        // 0x28c084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c080) {
            ctx->pc = 0x28C08Cu;
            goto label_28c08c;
        }
    }
    ctx->pc = 0x28C088u;
    // 0x28c088: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x28c088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_28c08c:
    // 0x28c08c: 0x52800008  beql        $s4, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C08Cu;
    {
        const bool branch_taken_0x28c08c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c08c) {
            ctx->pc = 0x28C090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C08Cu;
            // 0x28c090: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C0B0u;
            goto label_28c0b0;
        }
    }
    ctx->pc = 0x28C094u;
    // 0x28c094: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x28c094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x28c098: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C098u;
    {
        const bool branch_taken_0x28c098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c098) {
            ctx->pc = 0x28C09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C098u;
            // 0x28c09c: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C0B0u;
            goto label_28c0b0;
        }
    }
    ctx->pc = 0x28C0A0u;
    // 0x28c0a0: 0xc0a3702  jal         func_28DC08
    ctx->pc = 0x28C0A0u;
    SET_GPR_U32(ctx, 31, 0x28C0A8u);
    ctx->pc = 0x28C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C0A0u;
    // 0x28c0a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DC08u, 0x28C0A0u, 0x28C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C0A8u;
label_28c0a8:
    // 0x28c0a8: 0x10000257  b           . + 4 + (0x257 << 2)
    ctx->pc = 0x28C0A8u;
    {
        const bool branch_taken_0x28c0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0A8u;
        // 0x28c0ac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0a8) {
            ctx->pc = 0x28CA08u;
            goto label_28ca08;
        }
    }
    ctx->pc = 0x28C0B0u;
label_28c0b0:
    // 0x28c0b0: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x28c0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x28c0b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28c0b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28c0b8: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x28c0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x28c0bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c0c0: 0xc0a34b4  jal         func_28D2D0
    ctx->pc = 0x28C0C0u;
    SET_GPR_U32(ctx, 31, 0x28C0C8u);
    ctx->pc = 0x28C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C0C0u;
    // 0x28c0c4: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2D0u, 0x28C0C0u, 0x28C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C0C8u;
label_28c0c8:
    // 0x28c0c8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28c0cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28c0ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0d0: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x28c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x28c0d4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x28c0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x28c0d8: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x28C0D8u;
    {
        const bool branch_taken_0x28c0d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0D8u;
        // 0x28c0dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0d8) {
            ctx->pc = 0x28C118u;
            goto label_28c118;
        }
    }
    ctx->pc = 0x28C0E0u;
    // 0x28c0e0: 0x8e240270  lw          $a0, 0x270($s1)
    ctx->pc = 0x28c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x28c0e4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x28C0E4u;
    {
        const bool branch_taken_0x28c0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c0e4) {
            ctx->pc = 0x28C118u;
            goto label_28c118;
        }
    }
    ctx->pc = 0x28C0ECu;
    // 0x28c0ec: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x28c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x28c0f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c0f4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x28c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x28c0f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x28c0f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c0fc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x28c0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28c100: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x28c100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x28c104: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28c104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c108: 0xc0a34b4  jal         func_28D2D0
    ctx->pc = 0x28C108u;
    SET_GPR_U32(ctx, 31, 0x28C110u);
    ctx->pc = 0x28C10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C108u;
    // 0x28c10c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2D0u, 0x28C108u, 0x28C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C110u;
label_28c110:
    // 0x28c110: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28c110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28c114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c118:
    // 0x28c118: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28C118u;
    {
        const bool branch_taken_0x28c118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C118u;
        // 0x28c11c: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c118) {
            ctx->pc = 0x28C150u;
            goto label_28c150;
        }
    }
    ctx->pc = 0x28C120u;
    // 0x28c120: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x28c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x28c124: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28c124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c128: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x28C128u;
    SET_GPR_U32(ctx, 31, 0x28C130u);
    ctx->pc = 0x28C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C128u;
    // 0x28c12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x28C128u, 0x28C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C130u;
label_28c130:
    // 0x28c130: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C130u;
    {
        const bool branch_taken_0x28c130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C130u;
        // 0x28c134: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c130) {
            ctx->pc = 0x28C144u;
            goto label_28c144;
        }
    }
    ctx->pc = 0x28C138u;
    // 0x28c138: 0xc0c4900  jal         func_312400
    ctx->pc = 0x28C138u;
    SET_GPR_U32(ctx, 31, 0x28C140u);
    ctx->pc = 0x28C13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C138u;
    // 0x28c13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x28C138u, 0x28C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C140u;
label_28c140:
    // 0x28c140: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x28c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_28c144:
    // 0x28c144: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x28c144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c148: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x28c148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28c14c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x28c14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28c150:
    // 0x28c150: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x28c150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28c154: 0xc0a2ebc  jal         func_28BAF0
    ctx->pc = 0x28C154u;
    SET_GPR_U32(ctx, 31, 0x28C15Cu);
    ctx->pc = 0x28C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C154u;
    // 0x28c158: 0xc7ad0018  lwc1        $f13, 0x18($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BAF0u, 0x28C154u, 0x28C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C15Cu;
label_28c15c:
    // 0x28c15c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28c160: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x28c160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c164: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x28c164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c168: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28c168u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c16c: 0x8c43c9f0  lw          $v1, -0x3610($v0)
    ctx->pc = 0x28c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BC9F0u));
    // 0x28c170: 0x2450c9f0  addiu       $s0, $v0, -0x3610
    ctx->pc = 0x28c170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953456));
    // 0x28c174: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x28c174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28c178: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x28C178u;
    {
        const bool branch_taken_0x28c178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C178u;
        // 0x28c17c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c178) {
            ctx->pc = 0x28C400u;
            goto label_28c400;
        }
    }
    ctx->pc = 0x28C180u;
    // 0x28c180: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28c180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28c184: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x28c184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28c188: 0x8ca2bd50  lw          $v0, -0x42B0($a1)
    ctx->pc = 0x28c188u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x28c18c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x28c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x28c190: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x28c190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c194: 0xc4ac0070  lwc1        $f12, 0x70($a1)
    ctx->pc = 0x28c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c198: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x28c198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x28c19c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x28c19cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28c1a0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x28c1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c1a4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x28c1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28c1a8: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x28c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28c1ac: 0xe7ad0038  swc1        $f13, 0x38($sp)
    ctx->pc = 0x28c1acu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x28c1b0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x28c1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c1b4: 0xc0a2ebc  jal         func_28BAF0
    ctx->pc = 0x28C1B4u;
    SET_GPR_U32(ctx, 31, 0x28C1BCu);
    ctx->pc = 0x28C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1B4u;
    // 0x28c1b8: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BAF0u, 0x28C1B4u, 0x28C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1BCu;
label_28c1bc:
    // 0x28c1bc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x28c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c1c0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x28c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c1c4: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x28c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28c1c8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x28c1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28c1cc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28c1ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x28c1d0: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x28c1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28c1d4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x28c1d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x28c1d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28c1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28c1dc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x28c1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28c1e0: 0x46002186  mov.s       $f6, $f4
    ctx->pc = 0x28c1e0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[4]);
    // 0x28c1e4: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x28c1e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28c1e8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x28c1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x28c1ec: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x28c1ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28c1f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28c1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28c1f4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x28c1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x28c1f8: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x28c1f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x28c1fc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x28c1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28c200: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x28c200u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x28c204: 0x0  nop
    ctx->pc = 0x28c204u;
    // NOP
    // 0x28c208: 0x0  nop
    ctx->pc = 0x28c208u;
    // NOP
    // 0x28c20c: 0x46020544  c1          0x20544
    ctx->pc = 0x28c20cu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x28c210: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C210u;
    {
        const bool branch_taken_0x28c210 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C210u;
        // 0x28c214: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c210) {
            ctx->pc = 0x28C220u;
            goto label_28c220;
        }
    }
    ctx->pc = 0x28C218u;
    // 0x28c218: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x28c218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x28c21c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x28c21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_28c220:
    // 0x28c220: 0x0  nop
    ctx->pc = 0x28c220u;
    // NOP
    // 0x28c224: 0x46153034  c.lt.s      $f6, $f21
    ctx->pc = 0x28c224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c228: 0x0  nop
    ctx->pc = 0x28c228u;
    // NOP
    // 0x28c22c: 0x450101f6  bc1t        . + 4 + (0x1F6 << 2)
    ctx->pc = 0x28C22Cu;
    {
        const bool branch_taken_0x28c22c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C22Cu;
        // 0x28c230: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c22c) {
            ctx->pc = 0x28CA08u;
            goto label_28ca08;
        }
    }
    ctx->pc = 0x28C234u;
    // 0x28c234: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x28c234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x28c238: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C238u;
    {
        const bool branch_taken_0x28c238 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c238) {
            ctx->pc = 0x28C23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C238u;
            // 0x28c23c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C258u;
            goto label_28c258;
        }
    }
    ctx->pc = 0x28C240u;
    // 0x28c240: 0x46152036  c.le.s      $f4, $f21
    ctx->pc = 0x28c240u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c244: 0x0  nop
    ctx->pc = 0x28c244u;
    // NOP
    // 0x28c248: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x28C248u;
    {
        const bool branch_taken_0x28c248 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C248u;
        // 0x28c24c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c248) {
            ctx->pc = 0x28C2F4u;
            goto label_28c2f4;
        }
    }
    ctx->pc = 0x28C250u;
    // 0x28c250: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x28C250u;
    {
        const bool branch_taken_0x28c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C250u;
        // 0x28c254: 0x46002546  mov.s       $f21, $f4 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c250) {
            ctx->pc = 0x28C2F4u;
            goto label_28c2f4;
        }
    }
    ctx->pc = 0x28C258u;
label_28c258:
    // 0x28c258: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x28c258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
    // 0x28c25c: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x28c25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
    // 0x28c260: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x28c260u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28c264: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C264u;
    {
        const bool branch_taken_0x28c264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C264u;
        // 0x28c268: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c264) {
            ctx->pc = 0x28C278u;
            goto label_28c278;
        }
    }
    ctx->pc = 0x28C26Cu;
    // 0x28c26c: 0x2443f250  addiu       $v1, $v0, -0xDB0
    ctx->pc = 0x28c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
    // 0x28c270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28C270u;
    {
        const bool branch_taken_0x28c270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C270u;
        // 0x28c274: 0x8c630190  lw          $v1, 0x190($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c270) {
            ctx->pc = 0x28C280u;
            goto label_28c280;
        }
    }
    ctx->pc = 0x28C278u;
label_28c278:
    // 0x28c278: 0x2443f250  addiu       $v1, $v0, -0xDB0
    ctx->pc = 0x28c278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
    // 0x28c27c: 0x8c63018c  lw          $v1, 0x18C($v1)
    ctx->pc = 0x28c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_28c280:
    // 0x28c280: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x28c280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c284: 0x0  nop
    ctx->pc = 0x28c284u;
    // NOP
    // 0x28c288: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x28C288u;
    {
        const bool branch_taken_0x28c288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C288u;
        // 0x28c28c: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c288) {
            ctx->pc = 0x28C2E0u;
            goto label_28c2e0;
        }
    }
    ctx->pc = 0x28C290u;
    // 0x28c290: 0x52800017  beql        $s4, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x28C290u;
    {
        const bool branch_taken_0x28c290 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c290) {
            ctx->pc = 0x28C294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C290u;
            // 0x28c294: 0x461ad580  add.s       $f22, $f26, $f26 (Delay Slot)
            ctx->f[22] = FPU_ADD_S(ctx->f[26], ctx->f[26]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C2F0u;
            goto label_28c2f0;
        }
    }
    ctx->pc = 0x28C298u;
    // 0x28c298: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x28C298u;
    {
        const bool branch_taken_0x28c298 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C298u;
        // 0x28c29c: 0x2442f250  addiu       $v0, $v0, -0xDB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c298) {
            ctx->pc = 0x28C2C4u;
            goto label_28c2c4;
        }
    }
    ctx->pc = 0x28C2A0u;
    // 0x28c2a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28c2a4: 0x8c42019c  lw          $v0, 0x19C($v0)
    ctx->pc = 0x28c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x28c2a8: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C2A8u;
    {
        const bool branch_taken_0x28c2a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2A8u;
        // 0x28c2ac: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2a8) {
            ctx->pc = 0x28C2B8u;
            goto label_28c2b8;
        }
    }
    ctx->pc = 0x28C2B0u;
    // 0x28c2b0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28c2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x28c2b4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x28c2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_28c2b8:
    // 0x28c2b8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28c2bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28C2BCu;
    {
        const bool branch_taken_0x28c2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2BCu;
        // 0x28c2c0: 0xc456a7a4  lwc1        $f22, -0x585C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2bc) {
            ctx->pc = 0x28C2F0u;
            goto label_28c2f0;
        }
    }
    ctx->pc = 0x28C2C4u;
label_28c2c4:
    // 0x28c2c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C2C4u;
    {
        const bool branch_taken_0x28c2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2C4u;
        // 0x28c2c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2c4) {
            ctx->pc = 0x28C2D4u;
            goto label_28c2d4;
        }
    }
    ctx->pc = 0x28C2CCu;
    // 0x28c2cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28C2CCu;
    {
        const bool branch_taken_0x28c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2CCu;
        // 0x28c2d0: 0xc456a7b0  lwc1        $f22, -0x5850($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2cc) {
            ctx->pc = 0x28C2F0u;
            goto label_28c2f0;
        }
    }
    ctx->pc = 0x28C2D4u;
label_28c2d4:
    // 0x28c2d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28c2d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28C2D8u;
    {
        const bool branch_taken_0x28c2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2D8u;
        // 0x28c2dc: 0xc456a7ac  lwc1        $f22, -0x5854($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2d8) {
            ctx->pc = 0x28C2F0u;
            goto label_28c2f0;
        }
    }
    ctx->pc = 0x28C2E0u;
label_28c2e0:
    // 0x28c2e0: 0x3c0140b9  lui         $at, 0x40B9
    ctx->pc = 0x28c2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16569 << 16));
    // 0x28c2e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28c2e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28c2e8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x28c2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x28c2ec: 0x46002546  mov.s       $f21, $f4
    ctx->pc = 0x28c2ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[4]);
label_28c2f0:
    // 0x28c2f0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x28c2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c2f4:
    // 0x28c2f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28c2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c2f8: 0x0  nop
    ctx->pc = 0x28c2f8u;
    // NOP
    // 0x28c2fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28c2fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c300: 0x0  nop
    ctx->pc = 0x28c300u;
    // NOP
    // 0x28c304: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x28C304u;
    {
        const bool branch_taken_0x28c304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C304u;
        // 0x28c308: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c304) {
            ctx->pc = 0x28C31Cu;
            goto label_28c31c;
        }
    }
    ctx->pc = 0x28C30Cu;
    // 0x28c30c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28c30cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c310: 0x0  nop
    ctx->pc = 0x28c310u;
    // NOP
    // 0x28c314: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x28C314u;
    {
        const bool branch_taken_0x28c314 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C314u;
        // 0x28c318: 0xc7ae0004  lwc1        $f14, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c314) {
            ctx->pc = 0x28C350u;
            goto label_28c350;
        }
    }
    ctx->pc = 0x28C31Cu;
label_28c31c:
    // 0x28c31c: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x28C31Cu;
    SET_GPR_U32(ctx, 31, 0x28C324u);
    ctx->pc = 0x28C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C31Cu;
    // 0x28c320: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x28C31Cu, 0x28C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C324u;
label_28c324:
    // 0x28c324: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x28c324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c328: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x28c328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28c32c: 0x0  nop
    ctx->pc = 0x28c32cu;
    // NOP
    // 0x28c330: 0x0  nop
    ctx->pc = 0x28c330u;
    // NOP
    // 0x28c334: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x28c334u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28c338: 0x0  nop
    ctx->pc = 0x28c338u;
    // NOP
    // 0x28c33c: 0x0  nop
    ctx->pc = 0x28c33cu;
    // NOP
    // 0x28c340: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x28c340u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x28c344: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x28c344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28c348: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x28c348u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28c34c: 0xc7ae0004  lwc1        $f14, 0x4($sp)
    ctx->pc = 0x28c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_28c350:
    // 0x28c350: 0x26b0c9f0  addiu       $s0, $s5, -0x3610
    ctx->pc = 0x28c350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953456));
    // 0x28c354: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x28c354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c358: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x28c358u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x28c35c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x28c35cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28c360: 0xc0a2f26  jal         func_28BC98
    ctx->pc = 0x28C360u;
    SET_GPR_U32(ctx, 31, 0x28C368u);
    ctx->pc = 0x28C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C360u;
    // 0x28c364: 0x8fb30070  lw          $s3, 0x70($sp) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BC98u, 0x28C360u, 0x28C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C368u;
label_28c368:
    // 0x28c368: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x28c368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c36c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x28c36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x28c370: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28c370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28c374: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x28c374u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28c378: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x28c378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x28c37c: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x28c37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x28c380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28c380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c384: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x28c384u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x28c388: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x28c388u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28c38c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x28C38Cu;
    SET_GPR_U32(ctx, 31, 0x28C394u);
    ctx->pc = 0x28C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C38Cu;
    // 0x28c390: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x28C38Cu, 0x28C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C394u;
label_28c394:
    // 0x28c394: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x28c394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x28c398: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28c398u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28c39c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x28C39Cu;
    SET_GPR_U32(ctx, 31, 0x28C3A4u);
    ctx->pc = 0x28C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C39Cu;
    // 0x28c3a0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x28C39Cu, 0x28C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C3A4u;
label_28c3a4:
    // 0x28c3a4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x28c3a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x28c3a8: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x28c3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28c3ac: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x28c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28c3b0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x28c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c3b4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28c3b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28c3b8: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x28c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28c3bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28c3bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28c3c0: 0xc6050014  lwc1        $f5, 0x14($s0)
    ctx->pc = 0x28c3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28c3c4: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x28c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28c3c8: 0x0  nop
    ctx->pc = 0x28c3c8u;
    // NOP
    // 0x28c3cc: 0x0  nop
    ctx->pc = 0x28c3ccu;
    // NOP
    // 0x28c3d0: 0x46032603  div.s       $f24, $f4, $f3
    ctx->pc = 0x28c3d0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x28c3d4: 0x0  nop
    ctx->pc = 0x28c3d4u;
    // NOP
    // 0x28c3d8: 0x0  nop
    ctx->pc = 0x28c3d8u;
    // NOP
    // 0x28c3dc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x28c3dcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x28c3e0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x28c3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28c3e4: 0x0  nop
    ctx->pc = 0x28c3e4u;
    // NOP
    // 0x28c3e8: 0x0  nop
    ctx->pc = 0x28c3e8u;
    // NOP
    // 0x28c3ec: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x28c3ecu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[5]); }
    // 0x28c3f0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x28c3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x28c3f4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28c3f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28c3f8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28c3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28c3fc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x28c3fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28c400:
    // 0x28c400: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28c400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28c404: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x28c404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x28c408: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28c408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28c40c: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28C40Cu;
    {
        const bool branch_taken_0x28c40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C40Cu;
        // 0x28c410: 0x38620181  xori        $v0, $v1, 0x181 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)385);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c40c) {
            ctx->pc = 0x28C48Cu;
            goto label_28c48c;
        }
    }
    ctx->pc = 0x28C414u;
    // 0x28c414: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28c414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28c418: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28c418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28c41c: 0xc44ca798  lwc1        $f12, -0x5868($v0)
    ctx->pc = 0x28c41cu;
    { uint32_t bits = FAST_READ32(0x3FA798u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c420: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x28c420u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x28c424: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x28C424u;
    SET_GPR_U32(ctx, 31, 0x28C42Cu);
    ctx->pc = 0x28C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C424u;
    // 0x28c428: 0x8c72f3e8  lw          $s2, -0xC18($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x28C424u, 0x28C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C42Cu;
label_28c42c:
    // 0x28c42c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x28c42cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x28c430: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28c430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28c434: 0xc440ac6c  lwc1        $f0, -0x5394($v0)
    ctx->pc = 0x28c434u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c438: 0x46001d86  mov.s       $f22, $f3
    ctx->pc = 0x28c438u;
    ctx->f[22] = FPU_MOV_S(ctx->f[3]);
    // 0x28c43c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28c43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28c440: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28c440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c444: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x28c444u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x28c448: 0x46001d02  mul.s       $f20, $f3, $f0
    ctx->pc = 0x28c448u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28c44c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x28c44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c450: 0x4601b5c2  mul.s       $f23, $f22, $f1
    ctx->pc = 0x28c450u;
    ctx->f[23] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x28c454: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x28c454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28c458: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28c458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c45c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28c45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c460: 0x4601a542  mul.s       $f21, $f20, $f1
    ctx->pc = 0x28c460u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x28c464: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x28c464u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x28c468: 0x46176b41  sub.s       $f13, $f13, $f23
    ctx->pc = 0x28c468u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[23]);
    // 0x28c46c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28c46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c470: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28c470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c474: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x28c474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c478: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x28c478u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x28c47c: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28C47Cu;
    SET_GPR_U32(ctx, 31, 0x28C484u);
    ctx->pc = 0x28C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C47Cu;
    // 0x28c480: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28C47Cu, 0x28C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C484u;
label_28c484:
    // 0x28c484: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x28C484u;
    {
        const bool branch_taken_0x28c484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C484u;
        // 0x28c488: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c484) {
            ctx->pc = 0x28CA08u;
            goto label_28ca08;
        }
    }
    ctx->pc = 0x28C48Cu;
label_28c48c:
    // 0x28c48c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x28C48Cu;
    {
        const bool branch_taken_0x28c48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C48Cu;
        // 0x28c490: 0x8fa80074  lw          $t0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c48c) {
            ctx->pc = 0x28C578u;
            goto label_28c578;
        }
    }
    ctx->pc = 0x28C494u;
    // 0x28c494: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28c494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28c498: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28c498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28c49c: 0xc44ca79c  lwc1        $f12, -0x5864($v0)
    ctx->pc = 0x28c49cu;
    { uint32_t bits = FAST_READ32(0x3FA79Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c4a0: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x28c4a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x28c4a4: 0x8c72f3f8  lw          $s2, -0xC08($v1)
    ctx->pc = 0x28c4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x4BF3F8u));
    // 0x28c4a8: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x28C4A8u;
    SET_GPR_U32(ctx, 31, 0x28C4B0u);
    ctx->pc = 0x28C4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C4A8u;
    // 0x28c4ac: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x28C4A8u, 0x28C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4B0u;
label_28c4b0:
    // 0x28c4b0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x28c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x28c4b4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x28c4b4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x28c4b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28c4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28c4bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28c4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c4c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28c4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c4c4: 0x4600b5c2  mul.s       $f23, $f22, $f0
    ctx->pc = 0x28c4c4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x28c4c8: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x28C4C8u;
    SET_GPR_U32(ctx, 31, 0x28C4D0u);
    ctx->pc = 0x28C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C4C8u;
    // 0x28c4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x28C4C8u, 0x28C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4D0u;
label_28c4d0:
    // 0x28c4d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C4D0u;
    {
        const bool branch_taken_0x28c4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c4d0) {
            ctx->pc = 0x28C4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C4D0u;
            // 0x28c4d4: 0xc60c00a0  lwc1        $f12, 0xA0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C4E4u;
            goto label_28c4e4;
        }
    }
    ctx->pc = 0x28C4D8u;
    // 0x28c4d8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x28C4D8u;
    SET_GPR_U32(ctx, 31, 0x28C4E0u);
    ctx->pc = 0x28C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C4D8u;
    // 0x28c4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x28C4D8u, 0x28C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4E0u;
label_28c4e0:
    // 0x28c4e0: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x28c4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28c4e4:
    // 0x28c4e4: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x28c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x28c4e8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x28c4e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28c4ec: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x28c4ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28c4f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x28c4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c4f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28c4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28c4f8: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x28c4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28c4fc: 0xe7ae0028  swc1        $f14, 0x28($sp)
    ctx->pc = 0x28c4fcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28c500: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x28c500u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x28c504: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x28c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c508: 0xc0a2f26  jal         func_28BC98
    ctx->pc = 0x28C508u;
    SET_GPR_U32(ctx, 31, 0x28C510u);
    ctx->pc = 0x28C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C508u;
    // 0x28c50c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BC98u, 0x28C508u, 0x28C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C510u;
label_28c510:
    // 0x28c510: 0x8ea2c9f0  lw          $v0, -0x3610($s5)
    ctx->pc = 0x28c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953456)));
    // 0x28c514: 0x26a3c9f0  addiu       $v1, $s5, -0x3610
    ctx->pc = 0x28c514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953456));
    // 0x28c518: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C518u;
    {
        const bool branch_taken_0x28c518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C518u;
        // 0x28c51c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c518) {
            ctx->pc = 0x28C528u;
            goto label_28c528;
        }
    }
    ctx->pc = 0x28C520u;
    // 0x28c520: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x28c520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c524: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x28c524u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_28c528:
    // 0x28c528: 0xc0da658  jal         func_369960
    ctx->pc = 0x28C528u;
    SET_GPR_U32(ctx, 31, 0x28C530u);
    ctx->pc = 0x28C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C528u;
    // 0x28c52c: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x28C528u, 0x28C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C530u;
label_28c530:
    // 0x28c530: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x28c530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c534: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x28c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28c538: 0x2610ca60  addiu       $s0, $s0, -0x35A0
    ctx->pc = 0x28c538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953568));
    // 0x28c53c: 0x46176301  sub.s       $f12, $f12, $f23
    ctx->pc = 0x28c53cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[23]);
    // 0x28c540: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x28c540u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x28c544: 0x46176b41  sub.s       $f13, $f13, $f23
    ctx->pc = 0x28c544u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[23]);
    // 0x28c548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c54c: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x28c54cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x28c550: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28c550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c554: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28c554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c558: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28c558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c55c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28c55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c560: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x28c560u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c564: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x28c564u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x28c568: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28C568u;
    SET_GPR_U32(ctx, 31, 0x28C570u);
    ctx->pc = 0x28C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C568u;
    // 0x28c56c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28C568u, 0x28C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C570u;
label_28c570:
    // 0x28c570: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x28C570u;
    {
        const bool branch_taken_0x28c570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C570u;
        // 0x28c574: 0xa2000004  sb          $zero, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c570) {
            ctx->pc = 0x28CA04u;
            goto label_28ca04;
        }
    }
    ctx->pc = 0x28C578u;
label_28c578:
    // 0x28c578: 0x11000074  beqz        $t0, . + 4 + (0x74 << 2)
    ctx->pc = 0x28C578u;
    {
        const bool branch_taken_0x28c578 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C578u;
        // 0x28c57c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c578) {
            ctx->pc = 0x28C74Cu;
            goto label_28c74c;
        }
    }
    ctx->pc = 0x28C580u;
    // 0x28c580: 0x5a600073  blezl       $s3, . + 4 + (0x73 << 2)
    ctx->pc = 0x28C580u;
    {
        const bool branch_taken_0x28c580 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x28c580) {
            ctx->pc = 0x28C584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C580u;
            // 0x28c584: 0x8c43bd5c  lw          $v1, -0x42A4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C750u;
            goto label_28c750;
        }
    }
    ctx->pc = 0x28C588u;
    // 0x28c588: 0x8fa9007c  lw          $t1, 0x7C($sp)
    ctx->pc = 0x28c588u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x28c58c: 0x11200032  beqz        $t1, . + 4 + (0x32 << 2)
    ctx->pc = 0x28C58Cu;
    {
        const bool branch_taken_0x28c58c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C58Cu;
        // 0x28c590: 0x3862020f  xori        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c58c) {
            ctx->pc = 0x28C658u;
            goto label_28c658;
        }
    }
    ctx->pc = 0x28C594u;
    // 0x28c594: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x28c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x28c598: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28c598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c59c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x28C59Cu;
    SET_GPR_U32(ctx, 31, 0x28C5A4u);
    ctx->pc = 0x28C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C59Cu;
    // 0x28c5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x28C59Cu, 0x28C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C5A4u;
label_28c5a4:
    // 0x28c5a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C5A4u;
    {
        const bool branch_taken_0x28c5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c5a4) {
            ctx->pc = 0x28C5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C5A4u;
            // 0x28c5a8: 0xc60000a0  lwc1        $f0, 0xA0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C5B8u;
            goto label_28c5b8;
        }
    }
    ctx->pc = 0x28C5ACu;
    // 0x28c5ac: 0xc0c4900  jal         func_312400
    ctx->pc = 0x28C5ACu;
    SET_GPR_U32(ctx, 31, 0x28C5B4u);
    ctx->pc = 0x28C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C5ACu;
    // 0x28c5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x28C5ACu, 0x28C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C5B4u;
label_28c5b4:
    // 0x28c5b4: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x28c5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c5b8:
    // 0x28c5b8: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x28c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x28c5bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x28c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28c5c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28c5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28c5c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x28c5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28c5c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28c5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c5cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x28c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c5d0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28c5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28c5d4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x28c5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c5d8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x28c5d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28c5dc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x28c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c5e0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x28C5E0u;
    SET_GPR_U32(ctx, 31, 0x28C5E8u);
    ctx->pc = 0x28C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C5E0u;
    // 0x28c5e4: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x28C5E0u, 0x28C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C5E8u;
label_28c5e8:
    // 0x28c5e8: 0x8faa0070  lw          $t2, 0x70($sp)
    ctx->pc = 0x28c5e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28c5ec: 0x26a3c9f0  addiu       $v1, $s5, -0x3610
    ctx->pc = 0x28c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953456));
    // 0x28c5f0: 0xa3b60050  sb          $s6, 0x50($sp)
    ctx->pc = 0x28c5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 22));
    // 0x28c5f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c5f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x28c5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28c5fc: 0xa3aa0053  sb          $t2, 0x53($sp)
    ctx->pc = 0x28c5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 83), (uint8_t)GPR_U32(ctx, 10));
    // 0x28c600: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28c600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c604: 0xa3b70051  sb          $s7, 0x51($sp)
    ctx->pc = 0x28c604u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 23));
    // 0x28c608: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x28c608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28c60c: 0xa3be0052  sb          $fp, 0x52($sp)
    ctx->pc = 0x28c60cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 30));
    // 0x28c610: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x28c610u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x28c614: 0x8ba40053  lwl         $a0, 0x53($sp)
    ctx->pc = 0x28c614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x28c618: 0x9ba40050  lwr         $a0, 0x50($sp)
    ctx->pc = 0x28c618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x28c61c: 0xaba40033  swl         $a0, 0x33($sp)
    ctx->pc = 0x28c61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28c620: 0xbba40030  swr         $a0, 0x30($sp)
    ctx->pc = 0x28c620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28c624: 0x8fa80084  lw          $t0, 0x84($sp)
    ctx->pc = 0x28c624u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x28c628: 0x8baa0033  lwl         $t2, 0x33($sp)
    ctx->pc = 0x28c628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x28c62c: 0x9baa0030  lwr         $t2, 0x30($sp)
    ctx->pc = 0x28c62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
    // 0x28c630: 0xabaa0063  swl         $t2, 0x63($sp)
    ctx->pc = 0x28c630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28c634: 0xbbaa0060  swr         $t2, 0x60($sp)
    ctx->pc = 0x28c634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28c638: 0x8ea4c9f0  lw          $a0, -0x3610($s5)
    ctx->pc = 0x28c638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953456)));
    // 0x28c63c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28c63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c640: 0x8fa90060  lw          $t1, 0x60($sp)
    ctx->pc = 0x28c640u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28c644: 0xc46d001c  lwc1        $f13, 0x1C($v1)
    ctx->pc = 0x28c644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28c648: 0xc0a2f6a  jal         func_28BDA8
    ctx->pc = 0x28C648u;
    SET_GPR_U32(ctx, 31, 0x28C650u);
    ctx->pc = 0x28C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C648u;
    // 0x28c64c: 0x1224824  and         $t1, $t1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BDA8u, 0x28C648u, 0x28C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C650u;
label_28c650:
    // 0x28c650: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x28C650u;
    {
        const bool branch_taken_0x28c650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C650u;
        // 0x28c654: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c650) {
            ctx->pc = 0x28C74Cu;
            goto label_28c74c;
        }
    }
    ctx->pc = 0x28C658u;
label_28c658:
    // 0x28c658: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28C658u;
    {
        const bool branch_taken_0x28c658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C658u;
        // 0x28c65c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c658) {
            ctx->pc = 0x28C6D4u;
            goto label_28c6d4;
        }
    }
    ctx->pc = 0x28C660u;
    // 0x28c660: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28c660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28c664: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x28c664u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x28c668: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x28C668u;
    SET_GPR_U32(ctx, 31, 0x28C670u);
    ctx->pc = 0x28C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C668u;
    // 0x28c66c: 0xc44ca7a8  lwc1        $f12, -0x5858($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x28C668u, 0x28C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C670u;
label_28c670:
    // 0x28c670: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x28c670u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x28c674: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28c674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28c678: 0xc440ac6c  lwc1        $f0, -0x5394($v0)
    ctx->pc = 0x28c678u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c67c: 0x46001d86  mov.s       $f22, $f3
    ctx->pc = 0x28c67cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[3]);
    // 0x28c680: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28c680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28c684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28c684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c688: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28c688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28c68c: 0x46001d02  mul.s       $f20, $f3, $f0
    ctx->pc = 0x28c68cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28c690: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x28c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c694: 0x4601b5c2  mul.s       $f23, $f22, $f1
    ctx->pc = 0x28c694u;
    ctx->f[23] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x28c698: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x28c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28c69c: 0x8c48f3dc  lw          $t0, -0xC24($v0)
    ctx->pc = 0x28c69cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x4BF3DCu));
    // 0x28c6a0: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x28c6a0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x28c6a4: 0x4601a542  mul.s       $f21, $f20, $f1
    ctx->pc = 0x28c6a4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x28c6a8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x28c6a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x28c6ac: 0x46176b41  sub.s       $f13, $f13, $f23
    ctx->pc = 0x28c6acu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[23]);
    // 0x28c6b0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28c6b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28c6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6b8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28c6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6bc: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x28c6bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x28c6c0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28c6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6c4: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28C6C4u;
    SET_GPR_U32(ctx, 31, 0x28C6CCu);
    ctx->pc = 0x28C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C6C4u;
    // 0x28c6c8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28C6C4u, 0x28C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C6CCu;
label_28c6cc:
    // 0x28c6cc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28C6CCu;
    {
        const bool branch_taken_0x28c6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6CCu;
        // 0x28c6d0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6cc) {
            ctx->pc = 0x28C74Cu;
            goto label_28c74c;
        }
    }
    ctx->pc = 0x28C6D4u;
label_28c6d4:
    // 0x28c6d4: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x28C6D4u;
    SET_GPR_U32(ctx, 31, 0x28C6DCu);
    ctx->pc = 0x28C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C6D4u;
    // 0x28c6d8: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x28C6D4u, 0x28C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C6DCu;
label_28c6dc:
    // 0x28c6dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28c6e0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x28c6e0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x28c6e4: 0xc441ac6c  lwc1        $f1, -0x5394($v0)
    ctx->pc = 0x28c6e4u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c6e8: 0x46001d86  mov.s       $f22, $f3
    ctx->pc = 0x28c6e8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[3]);
    // 0x28c6ec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x28c6ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28c6f0: 0x46011d02  mul.s       $f20, $f3, $f1
    ctx->pc = 0x28c6f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28c6f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28c6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28c6f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28c6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c6fc: 0x4602c832  c.eq.s      $f25, $f2
    ctx->pc = 0x28c6fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[25], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c700: 0x4600b5c2  mul.s       $f23, $f22, $f0
    ctx->pc = 0x28c700u;
    ctx->f[23] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x28c704: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x28C704u;
    {
        const bool branch_taken_0x28c704 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C704u;
        // 0x28c708: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c704) {
            ctx->pc = 0x28C714u;
            goto label_28c714;
        }
    }
    ctx->pc = 0x28C70Cu;
    // 0x28c70c: 0xc0da658  jal         func_369960
    ctx->pc = 0x28C70Cu;
    SET_GPR_U32(ctx, 31, 0x28C714u);
    ctx->pc = 0x28C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C70Cu;
    // 0x28c710: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x28C70Cu, 0x28C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C714u;
label_28c714:
    // 0x28c714: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x28c714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c718: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x28c718u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x28c71c: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x28c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28c720: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x28c720u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x28c724: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x28c724u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x28c728: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x28c728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28c72c: 0x46176b41  sub.s       $f13, $f13, $f23
    ctx->pc = 0x28c72cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[23]);
    // 0x28c730: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28c730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c734: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28c734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c738: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28c738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c73c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28c73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c740: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28C740u;
    SET_GPR_U32(ctx, 31, 0x28C748u);
    ctx->pc = 0x28C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C740u;
    // 0x28c744: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28C740u, 0x28C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C748u;
label_28c748:
    // 0x28c748: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28c748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_28c74c:
    // 0x28c74c: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x28c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950236)));
label_28c750:
    // 0x28c750: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C750u;
    {
        const bool branch_taken_0x28c750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C750u;
        // 0x28c754: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c750) {
            ctx->pc = 0x28C764u;
            goto label_28c764;
        }
    }
    ctx->pc = 0x28C758u;
    // 0x28c758: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x28c758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948897)));
    // 0x28c75c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C75Cu;
    {
        const bool branch_taken_0x28c75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C75Cu;
        // 0x28c760: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c75c) {
            ctx->pc = 0x28C770u;
            goto label_28c770;
        }
    }
    ctx->pc = 0x28C764u;
label_28c764:
    // 0x28c764: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x28c764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x28c768: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28C768u;
    {
        const bool branch_taken_0x28c768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C768u;
        // 0x28c76c: 0x8faa0078  lw          $t2, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c768) {
            ctx->pc = 0x28C7C0u;
            goto label_28c7c0;
        }
    }
    ctx->pc = 0x28C770u;
label_28c770:
    // 0x28c770: 0x8c422b40  lw          $v0, 0x2B40($v0)
    ctx->pc = 0x28c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11072)));
    // 0x28c774: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C774u;
    {
        const bool branch_taken_0x28c774 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C774u;
        // 0x28c778: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c774) {
            ctx->pc = 0x28C790u;
            goto label_28c790;
        }
    }
    ctx->pc = 0x28C77Cu;
    // 0x28c77c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28c77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c780: 0x0  nop
    ctx->pc = 0x28c780u;
    // NOP
    // 0x28c784: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28c784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28c788: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28C788u;
    {
        const bool branch_taken_0x28c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c788) {
            ctx->pc = 0x28C7A8u;
            goto label_28c7a8;
        }
    }
    ctx->pc = 0x28C790u;
label_28c790:
    // 0x28c790: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c794: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c798: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28c798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c79c: 0x0  nop
    ctx->pc = 0x28c79cu;
    // NOP
    // 0x28c7a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28c7a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28c7a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28c7a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28c7a8:
    // 0x28c7a8: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x28c7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x28c7ac: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x28c7acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x28c7b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28c7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c7b4: 0x0  nop
    ctx->pc = 0x28c7b4u;
    // NOP
    // 0x28c7b8: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x28c7b8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28c7bc: 0x8faa0078  lw          $t2, 0x78($sp)
    ctx->pc = 0x28c7bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_28c7c0:
    // 0x28c7c0: 0x11400073  beqz        $t2, . + 4 + (0x73 << 2)
    ctx->pc = 0x28C7C0u;
    {
        const bool branch_taken_0x28c7c0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7C0u;
        // 0x28c7c4: 0x8fa20170  lw          $v0, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7c0) {
            ctx->pc = 0x28C990u;
            goto label_28c990;
        }
    }
    ctx->pc = 0x28C7C8u;
    // 0x28c7c8: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x28c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x28c7cc: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x28c7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x28c7d0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x28c7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x28c7d4: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x28C7D4u;
    {
        const bool branch_taken_0x28c7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7D4u;
        // 0x28c7d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7d4) {
            ctx->pc = 0x28C980u;
            goto label_28c980;
        }
    }
    ctx->pc = 0x28C7DCu;
    // 0x28c7dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28c7e0: 0xc0a34ca  jal         func_28D328
    ctx->pc = 0x28C7E0u;
    SET_GPR_U32(ctx, 31, 0x28C7E8u);
    ctx->pc = 0x28C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7E0u;
    // 0x28c7e4: 0xc454a7c4  lwc1        $f20, -0x583C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D328u, 0x28C7E0u, 0x28C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7E8u;
label_28c7e8:
    // 0x28c7e8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x28c7e8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x28c7ec: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x28c7ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c7f0: 0x0  nop
    ctx->pc = 0x28c7f0u;
    // NOP
    // 0x28c7f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28C7F4u;
    {
        const bool branch_taken_0x28c7f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c7f4) {
            ctx->pc = 0x28C7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C7F4u;
            // 0x28c7f8: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C7FCu;
            goto label_28c7fc;
        }
    }
    ctx->pc = 0x28C7FCu;
label_28c7fc:
    // 0x28c7fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28c800: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28c800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c804: 0xc440c5e8  lwc1        $f0, -0x3A18($v0)
    ctx->pc = 0x28c804u;
    { uint32_t bits = FAST_READ32(0x6BC5E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c808: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28c808u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c80c: 0x0  nop
    ctx->pc = 0x28c80cu;
    // NOP
    // 0x28c810: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28C810u;
    {
        const bool branch_taken_0x28c810 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C810u;
        // 0x28c814: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c810) {
            ctx->pc = 0x28C828u;
            goto label_28c828;
        }
    }
    ctx->pc = 0x28C818u;
    // 0x28c818: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x28c818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c81c: 0x0  nop
    ctx->pc = 0x28c81cu;
    // NOP
    // 0x28c820: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28C820u;
    {
        const bool branch_taken_0x28c820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c820) {
            ctx->pc = 0x28C824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C820u;
            // 0x28c824: 0xe4a1c5e8  swc1        $f1, -0x3A18($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294952424), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C828u;
            goto label_28c828;
        }
    }
    ctx->pc = 0x28C828u;
label_28c828:
    // 0x28c828: 0xc4a0c5e8  lwc1        $f0, -0x3A18($a1)
    ctx->pc = 0x28c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294952424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c82c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x28c82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28c830: 0x0  nop
    ctx->pc = 0x28c830u;
    // NOP
    // 0x28c834: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x28c834u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c838: 0x0  nop
    ctx->pc = 0x28c838u;
    // NOP
    // 0x28c83c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x28C83Cu;
    {
        const bool branch_taken_0x28c83c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C83Cu;
        // 0x28c840: 0x24a4c5e8  addiu       $a0, $a1, -0x3A18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c83c) {
            ctx->pc = 0x28C870u;
            goto label_28c870;
        }
    }
    ctx->pc = 0x28C844u;
    // 0x28c844: 0x0  nop
    ctx->pc = 0x28c844u;
    // NOP
    // 0x28c848: 0x0  nop
    ctx->pc = 0x28c848u;
    // NOP
    // 0x28c84c: 0x46141003  div.s       $f0, $f2, $f20
    ctx->pc = 0x28c84cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[20]); }
    // 0x28c850: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28c850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x28c854: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28c854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c858: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x28c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x28c85c: 0xe4a2c5e8  swc1        $f2, -0x3A18($a1)
    ctx->pc = 0x28c85cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294952424), bits); }
    // 0x28c860: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x28c860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x28c864: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28c864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28c868: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28C868u;
    {
        const bool branch_taken_0x28c868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C868u;
        // 0x28c86c: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c868) {
            ctx->pc = 0x28C8E8u;
            goto label_28c8e8;
        }
    }
    ctx->pc = 0x28C870u;
label_28c870:
    // 0x28c870: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x28c870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c874: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28c874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c878: 0x0  nop
    ctx->pc = 0x28c878u;
    // NOP
    // 0x28c87c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x28C87Cu;
    {
        const bool branch_taken_0x28c87c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c87c) {
            ctx->pc = 0x28C880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C87Cu;
            // 0x28c880: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C898u;
            goto label_28c898;
        }
    }
    ctx->pc = 0x28C884u;
    // 0x28c884: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28c884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c888: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x28c888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x28c88c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28c88cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28c890: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28C890u;
    {
        const bool branch_taken_0x28c890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C890u;
        // 0x28c894: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c890) {
            ctx->pc = 0x28C8CCu;
            goto label_28c8cc;
        }
    }
    ctx->pc = 0x28C898u;
label_28c898:
    // 0x28c898: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x28c898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x28c89c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28c89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8a0: 0x0  nop
    ctx->pc = 0x28c8a0u;
    // NOP
    // 0x28c8a4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x28c8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x28c8a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28c8a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28c8ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x28c8acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28c8b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c8b4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C8B4u;
    {
        const bool branch_taken_0x28c8b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8B4u;
        // 0x28c8b8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8b4) {
            ctx->pc = 0x28C8CCu;
            goto label_28c8cc;
        }
    }
    ctx->pc = 0x28C8BCu;
    // 0x28c8bc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x28c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x28c8c0: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x28c8c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28c8c4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x28c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x28c8c8: 0xe4a3c5e8  swc1        $f3, -0x3A18($a1)
    ctx->pc = 0x28c8c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294952424), bits); }
label_28c8cc:
    // 0x28c8cc: 0x24a2c5e8  addiu       $v0, $a1, -0x3A18
    ctx->pc = 0x28c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952424));
    // 0x28c8d0: 0xc4a1c5e8  lwc1        $f1, -0x3A18($a1)
    ctx->pc = 0x28c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294952424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c8d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x28c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c8d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28c8d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c8dc: 0x0  nop
    ctx->pc = 0x28c8dcu;
    // NOP
    // 0x28c8e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28C8E0u;
    {
        const bool branch_taken_0x28c8e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c8e0) {
            ctx->pc = 0x28C8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C8E0u;
            // 0x28c8e4: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C8E8u;
            goto label_28c8e8;
        }
    }
    ctx->pc = 0x28C8E8u;
label_28c8e8:
    // 0x28c8e8: 0x24b0c5e8  addiu       $s0, $a1, -0x3A18
    ctx->pc = 0x28c8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952424));
    // 0x28c8ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c8ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8f0: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x28c8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c8f4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x28c8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c8f8: 0x0  nop
    ctx->pc = 0x28c8f8u;
    // NOP
    // 0x28c8fc: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x28C8FCu;
    {
        const bool branch_taken_0x28c8fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8FCu;
        // 0x28c900: 0x8fa20170  lw          $v0, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8fc) {
            ctx->pc = 0x28C990u;
            goto label_28c990;
        }
    }
    ctx->pc = 0x28C904u;
    // 0x28c904: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x28c904u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x28c908: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x28C908u;
    SET_GPR_U32(ctx, 31, 0x28C910u);
    ctx->pc = 0x28C90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C908u;
    // 0x28c90c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x28C908u, 0x28C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C910u;
label_28c910:
    // 0x28c910: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x28c910u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x28c914: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28c914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28c918: 0xc440ac6c  lwc1        $f0, -0x5394($v0)
    ctx->pc = 0x28c918u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c91c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28c920: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28c920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28c924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28c924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c928: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x28c928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28c92c: 0x46001d02  mul.s       $f20, $f3, $f0
    ctx->pc = 0x28c92cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28c930: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x28c930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c934: 0x46011dc2  mul.s       $f23, $f3, $f1
    ctx->pc = 0x28c934u;
    ctx->f[23] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28c938: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x28c938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28c93c: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x28c93cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28c940: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x28c940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x28c944: 0x4601a542  mul.s       $f21, $f20, $f1
    ctx->pc = 0x28c944u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x28c948: 0x8c68f3f0  lw          $t0, -0xC10($v1)
    ctx->pc = 0x28c948u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x4BF3F0u));
    // 0x28c94c: 0x46176b41  sub.s       $f13, $f13, $f23
    ctx->pc = 0x28c94cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[23]);
    // 0x28c950: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x28c950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x28c954: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x28c954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x28c958: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x28c958u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x28c95c: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x28c95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x28c960: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x28c960u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x28c964: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x28c964u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x28c968: 0x46176b40  add.s       $f13, $f13, $f23
    ctx->pc = 0x28c968u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[23]);
    // 0x28c96c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28c96cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c970: 0xc0da9a6  jal         func_36A698
    ctx->pc = 0x28C970u;
    SET_GPR_U32(ctx, 31, 0x28C978u);
    ctx->pc = 0x28C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C970u;
    // 0x28c974: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A698u, 0x28C970u, 0x28C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C978u;
label_28c978:
    // 0x28c978: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28C978u;
    {
        const bool branch_taken_0x28c978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C978u;
        // 0x28c97c: 0x8fa20170  lw          $v0, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c978) {
            ctx->pc = 0x28C990u;
            goto label_28c990;
        }
    }
    ctx->pc = 0x28C980u;
label_28c980:
    // 0x28c980: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28c980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c984: 0xc0a34d2  jal         func_28D348
    ctx->pc = 0x28C984u;
    SET_GPR_U32(ctx, 31, 0x28C98Cu);
    ctx->pc = 0x28C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C984u;
    // 0x28c988: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D348u, 0x28C984u, 0x28C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C98Cu;
label_28c98c:
    // 0x28c98c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x28c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_28c990:
    // 0x28c990: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28C990u;
    {
        const bool branch_taken_0x28c990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C990u;
        // 0x28c994: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c990) {
            ctx->pc = 0x28CA08u;
            goto label_28ca08;
        }
    }
    ctx->pc = 0x28C998u;
    // 0x28c998: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x28c998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x28c99c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28c99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28c9a0: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x28C9A0u;
    SET_GPR_U32(ctx, 31, 0x28C9A8u);
    ctx->pc = 0x28C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C9A0u;
    // 0x28c9a4: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x28C9A0u, 0x28C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9A8u;
label_28c9a8:
    // 0x28c9a8: 0x461a00c2  mul.s       $f3, $f0, $f26
    ctx->pc = 0x28c9a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x28c9ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28c9b0: 0xc440ac6c  lwc1        $f0, -0x5394($v0)
    ctx->pc = 0x28c9b0u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c9b4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28c9b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28c9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28c9bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28c9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c9c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28c9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9c4: 0x46001d02  mul.s       $f20, $f3, $f0
    ctx->pc = 0x28c9c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28c9c8: 0x46001d86  mov.s       $f22, $f3
    ctx->pc = 0x28c9c8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[3]);
    // 0x28c9cc: 0x4601b5c2  mul.s       $f23, $f22, $f1
    ctx->pc = 0x28c9ccu;
    ctx->f[23] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x28c9d0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x28c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c9d4: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x28c9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28c9d8: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x28c9d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x28c9dc: 0x4601a542  mul.s       $f21, $f20, $f1
    ctx->pc = 0x28c9dcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x28c9e0: 0x8c68f3dc  lw          $t0, -0xC24($v1)
    ctx->pc = 0x28c9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x4BF3DCu));
    // 0x28c9e4: 0x46176b41  sub.s       $f13, $f13, $f23
    ctx->pc = 0x28c9e4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[23]);
    // 0x28c9e8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x28c9e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x28c9ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28c9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9f0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28c9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9f4: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x28c9f4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x28c9f8: 0x2407004b  addiu       $a3, $zero, 0x4B
    ctx->pc = 0x28c9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x28c9fc: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28C9FCu;
    SET_GPR_U32(ctx, 31, 0x28CA04u);
    ctx->pc = 0x28CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C9FCu;
    // 0x28ca00: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28C9FCu, 0x28CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA04u;
label_28ca04:
    // 0x28ca04: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28ca04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28ca08:
    // 0x28ca08: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x28ca08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28ca0c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x28ca0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28ca10: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x28ca10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28ca14: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x28ca14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28ca18: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x28ca18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28ca1c: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x28ca1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28ca20: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x28ca20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28ca24: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x28ca24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28ca28: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x28ca28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28ca2c: 0xc7ba0160  lwc1        $f26, 0x160($sp)
    ctx->pc = 0x28ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x28ca30: 0xc7b90158  lwc1        $f25, 0x158($sp)
    ctx->pc = 0x28ca30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x28ca34: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x28ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x28ca38: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x28ca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28ca3c: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x28ca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28ca40: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x28ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28ca44: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x28ca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28ca48: 0x3e00008  jr          $ra
    ctx->pc = 0x28CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA48u;
        // 0x28ca4c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CA50u;
}
