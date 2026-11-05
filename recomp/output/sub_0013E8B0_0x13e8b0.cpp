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

// Function: sub_0013E8B0
// Address: 0x13e8b0 - 0x13eac0
void sub_0013E8B0_0x13e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E8B0_0x13e8b0");
#endif

    switch (ctx->pc) {
        case 0x13e8ecu: goto label_13e8ec;
        case 0x13e90cu: goto label_13e90c;
        case 0x13e930u: goto label_13e930;
        case 0x13e940u: goto label_13e940;
        case 0x13e9a8u: goto label_13e9a8;
        case 0x13ea10u: goto label_13ea10;
        default: break;
    }

    ctx->pc = 0x13e8b0u;

    // 0x13e8b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13e8b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13e8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13e8b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13e8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13e8bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13e8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13e8c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e8c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8c4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x13e8c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x13e8c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13e8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13e8cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13e8d0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x13e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x13e8d4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x13e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x13e8d8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x13e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x13e8dc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x13e8dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x13e8e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13e8e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13e8e4: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x13E8E4u;
    SET_GPR_U32(ctx, 31, 0x13E8ECu);
    ctx->pc = 0x13E8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E8E4u;
    // 0x13e8e8: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x13E8E4u, 0x13E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8ECu;
label_13e8ec:
    // 0x13e8ec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13e8f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e8f4: 0x24929a08  addiu       $s2, $a0, -0x65F8
    ctx->pc = 0x13e8f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x13e8f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13e8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8fc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x13e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x13e900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e904: 0xc04f9d0  jal         func_13E740
    ctx->pc = 0x13E904u;
    SET_GPR_U32(ctx, 31, 0x13E90Cu);
    ctx->pc = 0x13E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E904u;
    // 0x13e908: 0x8c70020c  lw          $s0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E740u, 0x13E904u, 0x13E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E90Cu;
label_13e90c:
    // 0x13e90c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x13e90cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e910: 0x0  nop
    ctx->pc = 0x13e910u;
    // NOP
    // 0x13e914: 0x4503005f  bc1tl       . + 4 + (0x5F << 2)
    ctx->pc = 0x13E914u;
    {
        const bool branch_taken_0x13e914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e914) {
            ctx->pc = 0x13E918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E914u;
            // 0x13e918: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA94u;
            goto label_13ea94;
        }
    }
    ctx->pc = 0x13E91Cu;
    // 0x13e91c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x13e91cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x13e920: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x13E920u;
    {
        const bool branch_taken_0x13e920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e920) {
            ctx->pc = 0x13E924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E920u;
            // 0x13e924: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E960u;
            goto label_13e960;
        }
    }
    ctx->pc = 0x13E928u;
    // 0x13e928: 0xc043958  jal         func_10E560
    ctx->pc = 0x13E928u;
    SET_GPR_U32(ctx, 31, 0x13E930u);
    ctx->pc = 0x13E92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E928u;
    // 0x13e92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x13E928u, 0x13E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E930u;
label_13e930:
    // 0x13e930: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E930u;
    {
        const bool branch_taken_0x13e930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e930) {
            ctx->pc = 0x13E950u;
            goto label_13e950;
        }
    }
    ctx->pc = 0x13E938u;
    // 0x13e938: 0xc04fab0  jal         func_13EAC0
    ctx->pc = 0x13E938u;
    SET_GPR_U32(ctx, 31, 0x13E940u);
    ctx->pc = 0x13E93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E938u;
    // 0x13e93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EAC0u, 0x13E938u, 0x13E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E940u;
label_13e940:
    // 0x13e940: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x13e940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e944: 0x0  nop
    ctx->pc = 0x13e944u;
    // NOP
    // 0x13e948: 0x45010052  bc1t        . + 4 + (0x52 << 2)
    ctx->pc = 0x13E948u;
    {
        const bool branch_taken_0x13e948 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E948u;
        // 0x13e94c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e948) {
            ctx->pc = 0x13EA94u;
            goto label_13ea94;
        }
    }
    ctx->pc = 0x13E950u;
label_13e950:
    // 0x13e950: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13e950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x13e954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e958: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x13E958u;
    {
        const bool branch_taken_0x13e958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E958u;
        // 0x13e95c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e958) {
            ctx->pc = 0x13EA94u;
            goto label_13ea94;
        }
    }
    ctx->pc = 0x13E960u;
label_13e960:
    // 0x13e960: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e964: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13e964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x13e968: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x13e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13e96c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E96Cu;
    {
        const bool branch_taken_0x13e96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e96c) {
            ctx->pc = 0x13E970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E96Cu;
            // 0x13e970: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E97Cu;
            goto label_13e97c;
        }
    }
    ctx->pc = 0x13E974u;
    // 0x13e974: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E974u;
    {
        const bool branch_taken_0x13e974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E974u;
        // 0x13e978: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e974) {
            ctx->pc = 0x13E984u;
            goto label_13e984;
        }
    }
    ctx->pc = 0x13E97Cu;
label_13e97c:
    // 0x13e97c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e980: 0x24750070  addiu       $s5, $v1, 0x70
    ctx->pc = 0x13e980u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_13e984:
    // 0x13e984: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13e984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13e988: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13e988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x13e98c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13e98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13e990: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x13e990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x13e994: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13e994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13e998: 0x2696fefc  addiu       $s6, $s4, -0x104
    ctx->pc = 0x13e998u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967036));
    // 0x13e99c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13e99cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e9a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13e9a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e9a4: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x13e9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_13e9a8:
    // 0x13e9a8: 0x12620038  beq         $s3, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x13E9A8u;
    {
        const bool branch_taken_0x13e9a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x13E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9A8u;
        // 0x13e9ac: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9a8) {
            ctx->pc = 0x13EA8Cu;
            goto label_13ea8c;
        }
    }
    ctx->pc = 0x13E9B0u;
    // 0x13e9b0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x13e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13e9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e9b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e9bc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x13E9BCu;
    {
        const bool branch_taken_0x13e9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9BCu;
        // 0x13e9c0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9bc) {
            ctx->pc = 0x13EA78u;
            goto label_13ea78;
        }
    }
    ctx->pc = 0x13E9C4u;
    // 0x13e9c4: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x13e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13e9c8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13e9cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e9d0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x13E9D0u;
    {
        const bool branch_taken_0x13e9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9D0u;
        // 0x13e9d4: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9d0) {
            ctx->pc = 0x13EA78u;
            goto label_13ea78;
        }
    }
    ctx->pc = 0x13E9D8u;
    // 0x13e9d8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13e9dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e9e0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x13e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x13e9e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e9e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E9E8u;
    {
        const bool branch_taken_0x13e9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e9e8) {
            ctx->pc = 0x13E9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E9E8u;
            // 0x13e9ec: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E9F8u;
            goto label_13e9f8;
        }
    }
    ctx->pc = 0x13E9F0u;
    // 0x13e9f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E9F0u;
    {
        const bool branch_taken_0x13e9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9F0u;
        // 0x13e9f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9f0) {
            ctx->pc = 0x13EA00u;
            goto label_13ea00;
        }
    }
    ctx->pc = 0x13E9F8u;
label_13e9f8:
    // 0x13e9f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e9fc: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x13e9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_13ea00:
    // 0x13ea00: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x13EA00u;
    {
        const bool branch_taken_0x13ea00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA00u;
        // 0x13ea04: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea00) {
            ctx->pc = 0x13EA7Cu;
            goto label_13ea7c;
        }
    }
    ctx->pc = 0x13EA08u;
    // 0x13ea08: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x13EA08u;
    SET_GPR_U32(ctx, 31, 0x13EA10u);
    ctx->pc = 0x13EA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA08u;
    // 0x13ea0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x13EA08u, 0x13EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA10u;
label_13ea10:
    // 0x13ea10: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x13ea10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13ea14: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x13ea14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ea18: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x13ea18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13ea1c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13ea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13ea20: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x13ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ea24: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x13ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ea28: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x13ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ea2c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x13ea2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x13ea30: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x13ea30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x13ea34: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x13ea34u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x13ea38: 0x46000004  c1          0x4
    ctx->pc = 0x13ea38u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x13ea3c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x13ea3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ea40: 0x0  nop
    ctx->pc = 0x13ea40u;
    // NOP
    // 0x13ea44: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13EA44u;
    {
        const bool branch_taken_0x13ea44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA44u;
        // 0x13ea48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea44) {
            ctx->pc = 0x13EA50u;
            goto label_13ea50;
        }
    }
    ctx->pc = 0x13EA4Cu;
    // 0x13ea4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ea4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ea50:
    // 0x13ea50: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13EA50u;
    {
        const bool branch_taken_0x13ea50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea50) {
            ctx->pc = 0x13EA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA50u;
            // 0x13ea54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA78u;
            goto label_13ea78;
        }
    }
    ctx->pc = 0x13EA58u;
    // 0x13ea58: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x13ea58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ea5c: 0x0  nop
    ctx->pc = 0x13ea5cu;
    // NOP
    // 0x13ea60: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13EA60u;
    {
        const bool branch_taken_0x13ea60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA60u;
        // 0x13ea64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea60) {
            ctx->pc = 0x13EA6Cu;
            goto label_13ea6c;
        }
    }
    ctx->pc = 0x13EA68u;
    // 0x13ea68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ea68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ea6c:
    // 0x13ea6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EA6Cu;
    {
        const bool branch_taken_0x13ea6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA6Cu;
        // 0x13ea70: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea6c) {
            ctx->pc = 0x13EA7Cu;
            goto label_13ea7c;
        }
    }
    ctx->pc = 0x13EA74u;
    // 0x13ea74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13ea74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_13ea78:
    // 0x13ea78: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x13ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13ea7c:
    // 0x13ea7c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x13ea7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ea80: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x13ea80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13ea84: 0x5460ffc8  bnel        $v1, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x13EA84u;
    {
        const bool branch_taken_0x13ea84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea84) {
            ctx->pc = 0x13EA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA84u;
            // 0x13ea88: 0x92220009  lbu         $v0, 0x9($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e9a8;
        }
    }
    ctx->pc = 0x13EA8Cu;
label_13ea8c:
    // 0x13ea8c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x13ea8cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x13ea90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13ea90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13ea94:
    // 0x13ea94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13ea94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ea98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13ea98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ea9c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13ea9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13eaa0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13eaa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13eaa4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x13eaa4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13eaa8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x13eaa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13eaac: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x13eaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13eab0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x13eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13eab4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x13eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13eab8: 0x3e00008  jr          $ra
    ctx->pc = 0x13EAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAB8u;
        // 0x13eabc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EAC0u;
}
