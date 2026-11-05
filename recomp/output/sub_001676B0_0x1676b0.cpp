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

// Function: sub_001676B0
// Address: 0x1676b0 - 0x167b10
void sub_001676B0_0x1676b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001676B0_0x1676b0");
#endif

    switch (ctx->pc) {
        case 0x1676f0u: goto label_1676f0;
        case 0x16777cu: goto label_16777c;
        case 0x167810u: goto label_167810;
        case 0x167818u: goto label_167818;
        case 0x1678b0u: goto label_1678b0;
        case 0x1678b8u: goto label_1678b8;
        case 0x167900u: goto label_167900;
        case 0x167908u: goto label_167908;
        case 0x167998u: goto label_167998;
        case 0x1679a0u: goto label_1679a0;
        case 0x1679f0u: goto label_1679f0;
        case 0x167a74u: goto label_167a74;
        case 0x167ac0u: goto label_167ac0;
        case 0x167aecu: goto label_167aec;
        default: break;
    }

    ctx->pc = 0x1676b0u;

    // 0x1676b0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1676b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1676b4: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x1676b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x1676b8: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x1676b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x1676bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1676bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676c0: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1676c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1676c4: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x1676c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x1676c8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1676C8u;
    {
        const bool branch_taken_0x1676c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676C8u;
        // 0x1676cc: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676c8) {
            ctx->pc = 0x1676F0u;
            goto label_1676f0;
        }
    }
    ctx->pc = 0x1676D0u;
    // 0x1676d0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1676d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1676d4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1676d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1676d8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1676d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676dc: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1676dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1676e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1676e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1676e4: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x1676e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1676e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1676E8u;
    {
        const bool branch_taken_0x1676e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1676e8) {
            ctx->pc = 0x1676ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1676E8u;
            // 0x1676ec: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1676F8u;
            goto label_1676f8;
        }
    }
    ctx->pc = 0x1676F0u;
label_1676f0:
    // 0x1676f0: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x1676F0u;
    {
        const bool branch_taken_0x1676f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676F0u;
        // 0x1676f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676f0) {
            ctx->pc = 0x167AF0u;
            goto label_167af0;
        }
    }
    ctx->pc = 0x1676F8u;
label_1676f8:
    // 0x1676f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1676f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1676fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1676fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167700: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x167700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x167704: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167704u;
    {
        const bool branch_taken_0x167704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167704) {
            ctx->pc = 0x167708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167704u;
            // 0x167708: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167714u;
            goto label_167714;
        }
    }
    ctx->pc = 0x16770Cu;
    // 0x16770c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16770Cu;
    {
        const bool branch_taken_0x16770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16770Cu;
        // 0x167710: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16770c) {
            ctx->pc = 0x16771Cu;
            goto label_16771c;
        }
    }
    ctx->pc = 0x167714u;
label_167714:
    // 0x167714: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x167714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167718: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x167718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16771c:
    // 0x16771c: 0x124000f4  beqz        $s2, . + 4 + (0xF4 << 2)
    ctx->pc = 0x16771Cu;
    {
        const bool branch_taken_0x16771c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x167720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16771Cu;
        // 0x167720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16771c) {
            ctx->pc = 0x167AF0u;
            goto label_167af0;
        }
    }
    ctx->pc = 0x167724u;
    // 0x167724: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x167724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x167728: 0x24839a08  addiu       $v1, $a0, -0x65F8
    ctx->pc = 0x167728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x16772c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16772cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167730: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167734: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x167734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x167738: 0x504000ed  beql        $v0, $zero, . + 4 + (0xED << 2)
    ctx->pc = 0x167738u;
    {
        const bool branch_taken_0x167738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167738) {
            ctx->pc = 0x16773Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167738u;
            // 0x16773c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167AF0u;
            goto label_167af0;
        }
    }
    ctx->pc = 0x167740u;
    // 0x167740: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x167740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x167744: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167748: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16774c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x167750: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167750u;
    {
        const bool branch_taken_0x167750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167750) {
            ctx->pc = 0x167754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167750u;
            // 0x167754: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167760u;
            goto label_167760;
        }
    }
    ctx->pc = 0x167758u;
    // 0x167758: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x167758u;
    {
        const bool branch_taken_0x167758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167758u;
        // 0x16775c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167758) {
            ctx->pc = 0x167768u;
            goto label_167768;
        }
    }
    ctx->pc = 0x167760u;
label_167760:
    // 0x167760: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x167760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167764: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x167764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_167768:
    // 0x167768: 0x1220ffe1  beqz        $s1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x167768u;
    {
        const bool branch_taken_0x167768 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167768u;
        // 0x16776c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167768) {
            ctx->pc = 0x1676F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1676f0;
        }
    }
    ctx->pc = 0x167770u;
    // 0x167770: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x167770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167774: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x167774u;
    SET_GPR_U32(ctx, 31, 0x16777Cu);
    ctx->pc = 0x167778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167774u;
    // 0x167778: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x167774u, 0x16777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16777Cu;
label_16777c:
    // 0x16777c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x16777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167780: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x167780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x167784: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x167784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x167788: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x167788u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x16778c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x16778cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x167790: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x167790u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x167794: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x167794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x167798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16779c: 0x0  nop
    ctx->pc = 0x16779cu;
    // NOP
    // 0x1677a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1677a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1677a4: 0x0  nop
    ctx->pc = 0x1677a4u;
    // NOP
    // 0x1677a8: 0x450100d1  bc1t        . + 4 + (0xD1 << 2)
    ctx->pc = 0x1677A8u;
    {
        const bool branch_taken_0x1677a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1677ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677A8u;
        // 0x1677ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677a8) {
            ctx->pc = 0x167AF0u;
            goto label_167af0;
        }
    }
    ctx->pc = 0x1677B0u;
    // 0x1677b0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1677b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1677b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1677b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1677b8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1677b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1677bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1677bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1677c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1677c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1677c4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1677c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1677c8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1677c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1677cc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1677ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1677d0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1677d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1677d4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1677d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1677d8: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x1677d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1677dc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1677dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1677e0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1677e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1677e4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1677e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1677e8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1677e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1677ec: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1677ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1677f0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1677f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1677f4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1677f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1677f8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1677f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1677fc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1677fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x167800: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x167800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167804: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x167804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x167808: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167808u;
    SET_GPR_U32(ctx, 31, 0x167810u);
    ctx->pc = 0x16780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167808u;
    // 0x16780c: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167808u, 0x167810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167810u;
label_167810:
    // 0x167810: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167810u;
    SET_GPR_U32(ctx, 31, 0x167818u);
    ctx->pc = 0x167814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167810u;
    // 0x167814: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167810u, 0x167818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167818u;
label_167818:
    // 0x167818: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x167818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16781c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x16781cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167820: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x167820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167824: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x167824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167828: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x167828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x16782c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167830: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x167830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x167834: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x167834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167838: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x167838u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16783c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x16783cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167840: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x167840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167844: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x167844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167848: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x167848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16784c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x16784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x167850: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x167850u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x167854: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x167854u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x167858: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x167858u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x16785c: 0x0  nop
    ctx->pc = 0x16785cu;
    // NOP
    // 0x167860: 0x0  nop
    ctx->pc = 0x167860u;
    // NOP
    // 0x167864: 0x46000044  c1          0x44
    ctx->pc = 0x167864u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x167868: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x167868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x16786c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16786cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x167870: 0x0  nop
    ctx->pc = 0x167870u;
    // NOP
    // 0x167874: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x167874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167878: 0x0  nop
    ctx->pc = 0x167878u;
    // NOP
    // 0x16787c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x16787Cu;
    {
        const bool branch_taken_0x16787c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16787Cu;
        // 0x167880: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16787c) {
            ctx->pc = 0x1678A8u;
            goto label_1678a8;
        }
    }
    ctx->pc = 0x167884u;
    // 0x167884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x167884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x167888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16788c: 0x0  nop
    ctx->pc = 0x16788cu;
    // NOP
    // 0x167890: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x167890u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x167894: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x167894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167898: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x167898u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16789c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16789cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1678a0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1678a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1678a4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1678a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_1678a8:
    // 0x1678a8: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x1678A8u;
    SET_GPR_U32(ctx, 31, 0x1678B0u);
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x1678A8u, 0x1678B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678B0u;
label_1678b0:
    // 0x1678b0: 0xc077ade  jal         func_1DEB78
    ctx->pc = 0x1678B0u;
    SET_GPR_U32(ctx, 31, 0x1678B8u);
    ctx->pc = 0x1678B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678B0u;
    // 0x1678b4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB78u, 0x1678B0u, 0x1678B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678B8u;
label_1678b8:
    // 0x1678b8: 0x1040ff8d  beqz        $v0, . + 4 + (-0x73 << 2)
    ctx->pc = 0x1678B8u;
    {
        const bool branch_taken_0x1678b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1678BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678B8u;
        // 0x1678bc: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678b8) {
            ctx->pc = 0x1676F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1676f0;
        }
    }
    ctx->pc = 0x1678C0u;
    // 0x1678c0: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1678c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1678c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1678c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1678c8: 0x1040ff89  beqz        $v0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x1678C8u;
    {
        const bool branch_taken_0x1678c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1678CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678C8u;
        // 0x1678cc: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678c8) {
            ctx->pc = 0x1676F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1676f0;
        }
    }
    ctx->pc = 0x1678D0u;
    // 0x1678d0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1678d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1678d4: 0x8e222b20  lw          $v0, 0x2B20($s1)
    ctx->pc = 0x1678d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
    // 0x1678d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1678d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1678dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1678dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1678e0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1678e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1678e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1678e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1678e8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1678e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1678ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1678ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1678f0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1678f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1678f4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1678f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1678f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1678F8u;
    SET_GPR_U32(ctx, 31, 0x167900u);
    ctx->pc = 0x1678FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678F8u;
    // 0x1678fc: 0xe7a1008c  swc1        $f1, 0x8C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1678F8u, 0x167900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167900u;
label_167900:
    // 0x167900: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167900u;
    SET_GPR_U32(ctx, 31, 0x167908u);
    ctx->pc = 0x167904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167900u;
    // 0x167904: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167900u, 0x167908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167908u;
label_167908:
    // 0x167908: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x167908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16790c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x16790cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x167910: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x167910u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167914: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x167914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x167918: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x167918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x16791c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x167920: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x167920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x167924: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x167924u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167928: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x167928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16792c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x16792cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167930: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x167930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167934: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x167934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167938: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x167938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16793c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x16793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x167940: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x167940u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x167944: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x167944u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x167948: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x167948u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x16794c: 0x0  nop
    ctx->pc = 0x16794cu;
    // NOP
    // 0x167950: 0x0  nop
    ctx->pc = 0x167950u;
    // NOP
    // 0x167954: 0x46000044  c1          0x44
    ctx->pc = 0x167954u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x167958: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x167958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x16795c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x16795cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167960: 0x0  nop
    ctx->pc = 0x167960u;
    // NOP
    // 0x167964: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x167964u;
    {
        const bool branch_taken_0x167964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167964u;
        // 0x167968: 0xe7a100e0  swc1        $f1, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167964) {
            ctx->pc = 0x167990u;
            goto label_167990;
        }
    }
    ctx->pc = 0x16796Cu;
    // 0x16796c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16796cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x167970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167974: 0x0  nop
    ctx->pc = 0x167974u;
    // NOP
    // 0x167978: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x167978u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x16797c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16797cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x167980: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x167980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167984: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x167984u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x167988: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16798c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x16798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_167990:
    // 0x167990: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x167990u;
    SET_GPR_U32(ctx, 31, 0x167998u);
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x167990u, 0x167998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167998u;
label_167998:
    // 0x167998: 0xc077ade  jal         func_1DEB78
    ctx->pc = 0x167998u;
    SET_GPR_U32(ctx, 31, 0x1679A0u);
    ctx->pc = 0x16799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167998u;
    // 0x16799c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB78u, 0x167998u, 0x1679A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1679A0u;
label_1679a0:
    // 0x1679a0: 0x1040ff53  beqz        $v0, . + 4 + (-0xAD << 2)
    ctx->pc = 0x1679A0u;
    {
        const bool branch_taken_0x1679a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1679A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679A0u;
        // 0x1679a4: 0x8e422b1c  lw          $v0, 0x2B1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679a0) {
            ctx->pc = 0x1676F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1676f0;
        }
    }
    ctx->pc = 0x1679A8u;
    // 0x1679a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1679a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1679ac: 0x1040ff50  beqz        $v0, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x1679ACu;
    {
        const bool branch_taken_0x1679ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1679B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679ACu;
        // 0x1679b0: 0x8e222b20  lw          $v0, 0x2B20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679ac) {
            ctx->pc = 0x1676F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1676f0;
        }
    }
    ctx->pc = 0x1679B4u;
    // 0x1679b4: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x1679b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1679b8: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1679b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1679bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1679bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1679c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1679c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1679c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1679c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1679c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1679c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1679cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1679ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1679d0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1679d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1679d4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1679d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1679d8: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x1679d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1679dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1679dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1679e0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1679e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1679e4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1679e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1679e8: 0xc059ec4  jal         func_167B10
    ctx->pc = 0x1679E8u;
    SET_GPR_U32(ctx, 31, 0x1679F0u);
    ctx->pc = 0x1679ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1679E8u;
    // 0x1679ec: 0xe7a100fc  swc1        $f1, 0xFC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B10u, 0x1679E8u, 0x1679F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1679F0u;
label_1679f0:
    // 0x1679f0: 0x1040ff3f  beqz        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x1679F0u;
    {
        const bool branch_taken_0x1679f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1679F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679F0u;
        // 0x1679f4: 0x260203d0  addiu       $v0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679f0) {
            ctx->pc = 0x1676F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1676f0;
        }
    }
    ctx->pc = 0x1679F8u;
    // 0x1679f8: 0x7e0003d0  sq          $zero, 0x3D0($s0)
    ctx->pc = 0x1679f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 976), GPR_VEC(ctx, 0));
    // 0x1679fc: 0x260303e0  addiu       $v1, $s0, 0x3E0
    ctx->pc = 0x1679fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
    // 0x167a00: 0x7e0003e0  sq          $zero, 0x3E0($s0)
    ctx->pc = 0x167a00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 992), GPR_VEC(ctx, 0));
    // 0x167a04: 0xe61403f0  swc1        $f20, 0x3F0($s0)
    ctx->pc = 0x167a04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1008), bits); }
    // 0x167a08: 0x7e000400  sq          $zero, 0x400($s0)
    ctx->pc = 0x167a08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1024), GPR_VEC(ctx, 0));
    // 0x167a0c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x167a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x167a10: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x167a10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167a14: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167a14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167a18: 0xfa0103d0  sqc2        $vf1, 0x3D0($s0)
    ctx->pc = 0x167a18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 976), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167a1c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x167a1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167a20: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x167a20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x167a24: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x167a24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x167a28: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x167a28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x167a2c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x167a2cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x167a30: 0x4a0003bf  vwaitq
    ctx->pc = 0x167a30u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x167a34: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x167a34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167a38: 0xfa0103d0  sqc2        $vf1, 0x3D0($s0)
    ctx->pc = 0x167a38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 976), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167a3c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x167a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167a40: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x167a40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x167a44: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167a44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167a48: 0xfa0103e0  sqc2        $vf1, 0x3E0($s0)
    ctx->pc = 0x167a48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 992), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167a4c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x167a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167a50: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x167a50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x167a54: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x167a54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x167a58: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x167a58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x167a5c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x167a5cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x167a60: 0x4a0003bf  vwaitq
    ctx->pc = 0x167a60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x167a64: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x167a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167a68: 0xfa0103e0  sqc2        $vf1, 0x3E0($s0)
    ctx->pc = 0x167a68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 992), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167a6c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167A6Cu;
    SET_GPR_U32(ctx, 31, 0x167A74u);
    ctx->pc = 0x167A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A6Cu;
    // 0x167a70: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167A6Cu, 0x167A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A74u;
label_167a74:
    // 0x167a74: 0xc60103d8  lwc1        $f1, 0x3D8($s0)
    ctx->pc = 0x167a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167a78: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x167a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x167a7c: 0xc60003d0  lwc1        $f0, 0x3D0($s0)
    ctx->pc = 0x167a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167a80: 0xc60203d4  lwc1        $f2, 0x3D4($s0)
    ctx->pc = 0x167a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167a84: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x167a84u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x167a88: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x167a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x167a8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x167a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x167a90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167a94: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x167a94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x167a98: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x167a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x167a9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x167a9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x167aa0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x167aa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167aa4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x167aa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x167aa8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167aac: 0xfa010400  sqc2        $vf1, 0x400($s0)
    ctx->pc = 0x167aacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1024), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x167ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ab8: 0xc059ee2  jal         func_167B88
    ctx->pc = 0x167AB8u;
    SET_GPR_U32(ctx, 31, 0x167AC0u);
    ctx->pc = 0x167ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167AB8u;
    // 0x167abc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B88u, 0x167AB8u, 0x167AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AC0u;
label_167ac0:
    // 0x167ac0: 0x1040ff0b  beqz        $v0, . + 4 + (-0xF5 << 2)
    ctx->pc = 0x167AC0u;
    {
        const bool branch_taken_0x167ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AC0u;
        // 0x167ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ac0) {
            ctx->pc = 0x1676F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1676f0;
        }
    }
    ctx->pc = 0x167AC8u;
    // 0x167ac8: 0xc6010400  lwc1        $f1, 0x400($s0)
    ctx->pc = 0x167ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167acc: 0xc6000408  lwc1        $f0, 0x408($s0)
    ctx->pc = 0x167accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167ad0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x167ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ad4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x167ad4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x167ad8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x167ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167adc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x167adcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x167ae0: 0xe6010400  swc1        $f1, 0x400($s0)
    ctx->pc = 0x167ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1024), bits); }
    // 0x167ae4: 0xc059ee2  jal         func_167B88
    ctx->pc = 0x167AE4u;
    SET_GPR_U32(ctx, 31, 0x167AECu);
    ctx->pc = 0x167AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167AE4u;
    // 0x167ae8: 0xe6000408  swc1        $f0, 0x408($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1032), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B88u, 0x167AE4u, 0x167AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AECu;
label_167aec:
    // 0x167aec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x167aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_167af0:
    // 0x167af0: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x167af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x167af4: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x167af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x167af8: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x167af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x167afc: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x167afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x167b00: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x167b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167b04: 0x3e00008  jr          $ra
    ctx->pc = 0x167B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B04u;
        // 0x167b08: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167B0Cu;
    // 0x167b0c: 0x0  nop
    ctx->pc = 0x167b0cu;
    // NOP
    ctx->pc = 0x167b10u;
}
