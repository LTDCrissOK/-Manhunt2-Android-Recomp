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

// Function: sub_00212FE8
// Address: 0x212fe8 - 0x213210
void sub_00212FE8_0x212fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212FE8_0x212fe8");
#endif

    switch (ctx->pc) {
        case 0x21303cu: goto label_21303c;
        case 0x21305cu: goto label_21305c;
        case 0x213090u: goto label_213090;
        case 0x2130a4u: goto label_2130a4;
        case 0x2130b8u: goto label_2130b8;
        case 0x2130c8u: goto label_2130c8;
        case 0x2130d8u: goto label_2130d8;
        case 0x213108u: goto label_213108;
        case 0x213144u: goto label_213144;
        case 0x213160u: goto label_213160;
        case 0x2131a4u: goto label_2131a4;
        case 0x2131c0u: goto label_2131c0;
        case 0x2131dcu: goto label_2131dc;
        default: break;
    }

    ctx->pc = 0x212fe8u;

    // 0x212fe8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x212fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x212fec: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x212fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x212ff0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x212ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x212ff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ff8: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x212ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x212ffc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x212ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213000: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x213000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x213004: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x213004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213008: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x213008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x21300c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21300cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213010: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x213010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x213014: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x213014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x213018: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x213018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x21301c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x21301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x213020: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x213020u;
    {
        const bool branch_taken_0x213020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213020u;
        // 0x213024: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213020) {
            ctx->pc = 0x2131E4u;
            goto label_2131e4;
        }
    }
    ctx->pc = 0x213028u;
    // 0x213028: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x213028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x21302c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213034: 0xc075272  jal         func_1D49C8
    ctx->pc = 0x213034u;
    SET_GPR_U32(ctx, 31, 0x21303Cu);
    ctx->pc = 0x213038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213034u;
    // 0x213038: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x213034u, 0x21303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21303Cu;
label_21303c:
    // 0x21303c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21303cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213040: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x213040u;
    {
        const bool branch_taken_0x213040 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x213040) {
            ctx->pc = 0x213044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213040u;
            // 0x213044: 0x8e020194  lw          $v0, 0x194($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213064u;
            goto label_213064;
        }
    }
    ctx->pc = 0x213048u;
    // 0x213048: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x213048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21304c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21304cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213050: 0x24a51488  addiu       $a1, $a1, 0x1488
    ctx->pc = 0x213050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5256));
    // 0x213054: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x213054u;
    SET_GPR_U32(ctx, 31, 0x21305Cu);
    ctx->pc = 0x213058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213054u;
    // 0x213058: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x213054u, 0x21305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21305Cu;
label_21305c:
    // 0x21305c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x21305Cu;
    {
        const bool branch_taken_0x21305c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21305Cu;
        // 0x213060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21305c) {
            ctx->pc = 0x2131E8u;
            goto label_2131e8;
        }
    }
    ctx->pc = 0x213064u;
label_213064:
    // 0x213064: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x213064u;
    {
        const bool branch_taken_0x213064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213064) {
            ctx->pc = 0x213068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213064u;
            // 0x213068: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2130B0u;
            goto label_2130b0;
        }
    }
    ctx->pc = 0x21306Cu;
    // 0x21306c: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21306Cu;
    {
        const bool branch_taken_0x21306c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x21306c) {
            ctx->pc = 0x213070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21306Cu;
            // 0x213070: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213088u;
            goto label_213088;
        }
    }
    ctx->pc = 0x213074u;
    // 0x213074: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x213074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
    // 0x213078: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21307c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x21307cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x213080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x213080u;
    {
        const bool branch_taken_0x213080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213080u;
        // 0x213084: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213080) {
            ctx->pc = 0x213090u;
            goto label_213090;
        }
    }
    ctx->pc = 0x213088u;
label_213088:
    // 0x213088: 0xc074256  jal         func_1D0958
    ctx->pc = 0x213088u;
    SET_GPR_U32(ctx, 31, 0x213090u);
    ctx->pc = 0x21308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213088u;
    // 0x21308c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0958u, 0x213088u, 0x213090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213090u;
label_213090:
    // 0x213090: 0x8e040198  lw          $a0, 0x198($s0)
    ctx->pc = 0x213090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x213094: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x213094u;
    {
        const bool branch_taken_0x213094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x213094) {
            ctx->pc = 0x213098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213094u;
            // 0x213098: 0x8e020194  lw          $v0, 0x194($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2130A8u;
            goto label_2130a8;
        }
    }
    ctx->pc = 0x21309Cu;
    // 0x21309c: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x21309Cu;
    SET_GPR_U32(ctx, 31, 0x2130A4u);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x21309Cu, 0x2130A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130A4u;
label_2130a4:
    // 0x2130a4: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x2130a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_2130a8:
    // 0x2130a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2130A8u;
    {
        const bool branch_taken_0x2130a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2130ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130A8u;
        // 0x2130ac: 0xae020198  sw          $v0, 0x198($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130a8) {
            ctx->pc = 0x2130B8u;
            goto label_2130b8;
        }
    }
    ctx->pc = 0x2130B0u;
label_2130b0:
    // 0x2130b0: 0xc074256  jal         func_1D0958
    ctx->pc = 0x2130B0u;
    SET_GPR_U32(ctx, 31, 0x2130B8u);
    ctx->pc = 0x2130B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130B0u;
    // 0x2130b4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0958u, 0x2130B0u, 0x2130B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130B8u;
label_2130b8:
    // 0x2130b8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2130b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2130bc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2130bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2130c0: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x2130C0u;
    SET_GPR_U32(ctx, 31, 0x2130C8u);
    ctx->pc = 0x2130C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130C0u;
    // 0x2130c4: 0x2484f1b0  addiu       $a0, $a0, -0xE50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2130C0u, 0x2130C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130C8u;
label_2130c8:
    // 0x2130c8: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2130c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2130cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2130ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130d0: 0xc073dee  jal         func_1CF7B8
    ctx->pc = 0x2130D0u;
    SET_GPR_U32(ctx, 31, 0x2130D8u);
    ctx->pc = 0x2130D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130D0u;
    // 0x2130d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF7B8u, 0x2130D0u, 0x2130D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130D8u;
label_2130d8:
    // 0x2130d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2130d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2130dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2130e0: 0x14300a  movz        $a2, $zero, $s4
    ctx->pc = 0x2130e0u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x2130e4: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2130E4u;
    {
        const bool branch_taken_0x2130e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2130E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130E4u;
        // 0x2130e8: 0xae050194  sw          $a1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130e4) {
            ctx->pc = 0x213128u;
            goto label_213128;
        }
    }
    ctx->pc = 0x2130ECu;
    // 0x2130ec: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x2130ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x2130f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2130F0u;
    {
        const bool branch_taken_0x2130f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2130F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130F0u;
        // 0x2130f4: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130f0) {
            ctx->pc = 0x21312Cu;
            goto label_21312c;
        }
    }
    ctx->pc = 0x2130F8u;
    // 0x2130f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2130f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2130fc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2130fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x213100: 0xc07421a  jal         func_1D0868
    ctx->pc = 0x213100u;
    SET_GPR_U32(ctx, 31, 0x213108u);
    ctx->pc = 0x213104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213100u;
    // 0x213104: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0868u, 0x213100u, 0x213108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213108u;
label_213108:
    // 0x213108: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x213108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x21310c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21310cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213114: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x213114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x213118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21311c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x21311cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x213120: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x213120u;
    {
        const bool branch_taken_0x213120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213120u;
        // 0x213124: 0xe4610018  swc1        $f1, 0x18($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213120) {
            ctx->pc = 0x213144u;
            goto label_213144;
        }
    }
    ctx->pc = 0x213128u;
label_213128:
    // 0x213128: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x213128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_21312c:
    // 0x21312c: 0x8e050194  lw          $a1, 0x194($s0)
    ctx->pc = 0x21312cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x213130: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x213130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x213134: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213138: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x213138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21313c: 0xc07421a  jal         func_1D0868
    ctx->pc = 0x21313Cu;
    SET_GPR_U32(ctx, 31, 0x213144u);
    ctx->pc = 0x213140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21313Cu;
    // 0x213140: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0868u, 0x21313Cu, 0x213144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213144u;
label_213144:
    // 0x213144: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x213144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x213148: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x213148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21314c: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x21314cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x213150: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x213150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x213154: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x213154u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x213158: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x213158u;
    SET_GPR_U32(ctx, 31, 0x213160u);
    ctx->pc = 0x21315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213158u;
    // 0x21315c: 0x8e040194  lw          $a0, 0x194($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x213158u, 0x213160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213160u;
label_213160:
    // 0x213160: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x213160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x213164: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x213164u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x213168: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x213168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x21316c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21316Cu;
    {
        const bool branch_taken_0x21316c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21316c) {
            ctx->pc = 0x213194u;
            goto label_213194;
        }
    }
    ctx->pc = 0x213174u;
    // 0x213174: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x213174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x213178: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x213178u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x21317c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x21317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x213180: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x213180u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x213184: 0x8e040194  lw          $a0, 0x194($s0)
    ctx->pc = 0x213184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x213188: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x213188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x21318c: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x21318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x213190: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x213190u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
label_213194:
    // 0x213194: 0x52a00004  beql        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x213194u;
    {
        const bool branch_taken_0x213194 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x213194) {
            ctx->pc = 0x213198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213194u;
            // 0x213198: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2131A8u;
            goto label_2131a8;
        }
    }
    ctx->pc = 0x21319Cu;
    // 0x21319c: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x21319Cu;
    SET_GPR_U32(ctx, 31, 0x2131A4u);
    ctx->pc = 0x2131A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21319Cu;
    // 0x2131a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x21319Cu, 0x2131A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2131A4u;
label_2131a4:
    // 0x2131a4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2131a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2131a8:
    // 0x2131a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2131a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2131ac: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2131acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2131b0: 0x24a514a8  addiu       $a1, $a1, 0x14A8
    ctx->pc = 0x2131b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5288));
    // 0x2131b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2131b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2131b8: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x2131B8u;
    SET_GPR_U32(ctx, 31, 0x2131C0u);
    ctx->pc = 0x2131BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2131B8u;
    // 0x2131bc: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x2131B8u, 0x2131C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2131C0u;
label_2131c0:
    // 0x2131c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2131C0u;
    {
        const bool branch_taken_0x2131c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131C0u;
        // 0x2131c4: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131c0) {
            ctx->pc = 0x2131DCu;
            goto label_2131dc;
        }
    }
    ctx->pc = 0x2131C8u;
    // 0x2131c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2131c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2131cc: 0xac707d8c  sw          $s0, 0x7D8C($v1)
    ctx->pc = 0x2131ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32140), GPR_U32(ctx, 16));
    // 0x2131d0: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2131d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2131d4: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x2131D4u;
    SET_GPR_U32(ctx, 31, 0x2131DCu);
    ctx->pc = 0x2131D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2131D4u;
    // 0x2131d8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x2131D4u, 0x2131DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2131DCu;
label_2131dc:
    // 0x2131dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2131DCu;
    {
        const bool branch_taken_0x2131dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131DCu;
        // 0x2131e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131dc) {
            ctx->pc = 0x2131E8u;
            goto label_2131e8;
        }
    }
    ctx->pc = 0x2131E4u;
label_2131e4:
    // 0x2131e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2131e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2131e8:
    // 0x2131e8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2131e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2131ec: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2131ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2131f0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2131f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2131f4: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2131f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2131f8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2131f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2131fc: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2131fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x213200: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x213200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x213204: 0x3e00008  jr          $ra
    ctx->pc = 0x213204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213204u;
        // 0x213208: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21320Cu;
    // 0x21320c: 0x0  nop
    ctx->pc = 0x21320cu;
    // NOP
    ctx->pc = 0x213210u;
}
